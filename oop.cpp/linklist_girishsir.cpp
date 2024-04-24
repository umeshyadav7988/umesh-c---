// #include <iostream>
// #include <stack>

// using namespace std;

// int prec(char c)
// {

//     if (c == '^')
//     {

//         return 3;
//     }

//     else if (c == '*' || c == '/')
//     {

//         return 2;
//     }

//     else if (c == '+' || c == '-')
//     {

//         return 1;
//     }

//     else
//     {

//         return -1;
//     }
// }

// string infixtoPostfix(string s)
// {

//     stack<char> st;

//     string res;

//     for (int i = 0; i < s.length(); i++)
//     {

//         if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//         {

//             res += s[i];
//         }

//         else if (s[i] == '(')
//         {

//             st.push(s[i]);
//         }

//         else if (s[i] == ')')
//         {

//             while (!st.empty() && st.top() != '(')
//             {

//                 res += st.top();

//                 st.pop();
//             }

//             if (!st.empty())
//             {

//                 st.pop();
//             }
//         }

//         else
//         {

//             while (!st.empty() && prec(st.top()) > prec(s[i]))
//             {

//                 res += st.top();

//                 st.pop();
//             }

//             st.push(s[i]);
//         }
//     }

//     while (!st.empty())
//     {

//         res += st.top();

//         st.pop();
//     }

//     return res;
// }

// int main()
// {

//     cout << infixtoPostfix("(a-b/c)*(a/k-l)") << endl;
// }

#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// The main function to convert infix expression
// to postfix expression
string infixToPostfix(string s)
{

    stack<char> st; // For stack operations, we are using
                    // C++ built in stack
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        // If the scanned character is
        // an operand, add it to output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (c == '(')
            st.push('(');

        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        // If an operator is scanned
        else
        {
            // while (!st.empty() && prec(s[i]) <= prec(st.top()))
            while (!st.empty() && prec(s[i]) < prec(st.top()))

            {
                if (c == '^' && st.top() == '^')
                    break;
                else
                {
                    result += st.top();
                    st.pop();
                }
            }
            st.push(c);
        }
    }

    // Pop all the remaining elements from the stack
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    return result;
}

int main()
{
    // cout << infixToPostfix("k+l-m*n+(o^p)*w/u/v*t+q") << endl;
    // cout << infixToPostfix("a+b+c") << endl;
    // cout << infixToPostfix("a+b*c") << endl;
    // cout << infixToPostfix("A+B*C+D") << endl;
    // cout << infixToPostfix("A+B+C+D") << endl;
    // cout << infixToPostfix("A+(B*C)") << endl;
    // cout << infixToPostfix("A+B*C/D-F+A^E") << endl;
    cout << infixToPostfix("(A+B)*(c+d)") << endl;
    cout << infixToPostfix("c*d+a*b") << endl;


    // ab +
    // ab + c +
    // abc * +ABC * +D +
    // AB + C + D +
    // ABC * +ABC *D / +F - AE ^
}
