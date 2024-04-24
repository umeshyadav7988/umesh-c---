Stack example
#include<iostream>
using namespace std;
class Node {
    public :
    int data;
    Node *next;
    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};
class Stack {
    Node *head;
    int size;       // number of elements prsent in stack
    public :
    Stack() {
        head=NULL;
        size=0;
    }
    
    int getSize() {
        return size;
    }
    bool isEmpty() {
        if(size==0)
          return true;
      else return false;
    }
    void push(int element) {
      Node *newnode=new Node(element);
   if(head==NULL)
     head=newnode;
      else{
        newnode->next=head;
        head=newnode;
      }
      
        size++;
    }
    
    int pop() {
        // Return 0 if stack is empty. Don't display any other message
      if(head==NULL)
        return 0;
      int ans=head->data;
      Node *a=head;
      head=head->next;
      delete a;
        size--;
      return ans;
    }
    
    int top() {
        // Return 0 if stack is empty. Don't display any other message
       if(head == NULL)
        return 0;
      return head->data;
    }
};

    int main() {
        Stack st;
        int input;
        cin>>input;
		st.push(input);
        int ans = st.top();
        if(ans != 0) 
            cout << ans << endl;
        else                   
			cout << "-1" << endl;
        
		cin>>input;
		st.push(input);
        cin>>input;
		st.push(input);
        cin>>input;
		st.push(input);
        
        ans = st.top();
        if(ans != 0) 
            cout << ans << endl;
        else                   
			cout << "-1" << endl;
        
		ans = st.pop();
        if(ans != 0) 
            cout << ans << endl;
        
        else 
            cout << "-1" << endl;
        
        cout << st.getSize() << endl;
        if(st.isEmpty())
                    cout << "true" << endl;
        else
            cout << "false" << endl;
        
}
Balanced parenthesis
#include <iostream>
using namespace std;
#include <stack>

bool checkBalanced(char *exp) {
    stack<char> s;
    int i = 0;
	while(exp[i]!=NULL){
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
            s.push(exp[i]);
        }
        else if(exp[i]=='}'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='{'){
                s.pop();
            }
            else
                return false;
        }
        else if(exp[i]==']'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='['){
                s.pop();
            }
            else
                return false;
        }
        else if(exp[i]==')'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='('){
                s.pop();
            }
            else
                return false;
        }
        i++;
    }
    if(s.empty()){
        return true;
    }
    else
        return false;
}

int main() {
    char input[100000];
    cin.getline(input, 100000);
    if(checkBalanced(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
Reverse stack
//reverse a stack
#include <iostream>
using namespace std;
#include <stack>

void reverseStack(stack<int> &input, stack<int> &extra) {
	int len = input.size();
    
    for(int i=0;i<len;i++){
        extra.push(input.top());
        input.pop();
    }
    input = extra;
}

int main() {
    stack<int> s1, s2;
    int size;
    cin >> size;

    int val;
    for(int i = 0; i < size; i++) {
    	cin >> val;
    	s1.push(val);
    }
    reverseStack(s1, s2);
    while(!s1.empty()) {
    	cout << s1.top() << " ";
    	s1.pop();
    }
}

Queue example
#include <iostream>
#include <string>
using namespace std;
class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


class Queue {
	 Node *head;
    Node *tail;
    int size;
   public:
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }


	
	/*----------------- Public Functions of Stack -----------------*/

	 int getSize() { 
        return size; 
    }

    bool isEmpty() { 
        return size == 0; 
    }

    void enqueue(int data) {
        size++;
        Node *newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    int dequeue() {
        if (isEmpty()) {
            return -1;
        }

        int ans = head->data;

        Node *tmp = head;
        head = head->next;
        delete tmp;

        size--;

        return ans;
    }
    int front() {
        if (isEmpty())  {
            return -1;
        }

        return head->data;
    }
};


int main() {
    Queue q;
    int input;
    cin >> input;
    q.enqueue(input);
    cin >> input;
    q.enqueue(input);
    cin >> input;
    q.enqueue(input);
    
	cout << q.front() << "\n";
    cout << q.getSize() << "\n";
	cout << ((q.isEmpty()) ? "true\n" : "false\n");
     
	cout << q.dequeue() << "\n";
    cout << ((q.isEmpty()) ? "true\n" : "false\n");
        }
   
Reverse A Q
#include <iostream>
using namespace std;

#include <queue>

void reverseQueue(queue<int> &q) {
    if(q.empty()){
        return;
    }
    int a = q.front();
    q.pop();
    reverseQueue(q);
    q.push(a);

}

int main() {
    queue<int> q;
    int size;
    cin >> size;

    int val;
    for(int i = 0; i < size; i++) {
    	cin >> val;
    	q.push(val);
    }
    reverseQueue(q);
    while(!q.empty()) {
    	cout << q.front() << " ";
    	q.pop();
    }
}
Infix to postfix
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
 

string infixToPostfix(string s)
{
 
    stack<char> st; 
                   
    string result;
 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
           
            result += c;
 
        
        else if (c == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
 
        // If an operator is scanned
        else {
            while (!st.empty()
                   && prec(st.top()) >= prec(s[i])) {
                
                    result += st.top();
                    st.pop();
        
            }
            st.push(s[i]);
        }
    }
 
    // Pop all the remaining elements from the stack
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    //cout << result << endl;
    return result;
}
 
// Driver program to test above functions
int main()
{
    string exp = "a+b";
    cout << infixToPostfix(exp)<<endl;
    exp="a+b*c+d";
    cout << infixToPostfix(exp)<<endl;
    exp="(a+b)*(c+d)";
    cout << infixToPostfix(exp)<<endl;
    exp="a+b+c+d";
    cout << infixToPostfix(exp)<<endl;
    exp="a*b+c*d";
    cout << infixToPostfix(exp)<<endl;
    exp="(a+b)*c-(d-e)*(f+g)";
    cout << infixToPostfix(exp)<<endl;
    exp="a/(b-c)*d+e";
    cout << infixToPostfix(exp)<<endl;
    exp="k+l-m*n+(o^p)*w/u/v*t+q";
    cout << infixToPostfix(exp)<<endl;
    
    return 0;
}
Infix to prefix
#include<iostream>

#include<stack>

#include<algorithm>

using namespace std;

 

int prec(char c){

    if(c=='^'){

        return 3;

    }

    else if(c=='/'||c=='*'){

        return 2;

    }

    else if(c=='-'||c=='+'){

        return 1;

    }

    else{

        return -1;

    }

}

 

string infixToPrefix(string s){

 

    reverse(s.begin(),s.end());

   

    stack<char> st;

    string res;

 

    for(int i=0;i<s.length();i++){

 

        if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z')){

            res+=s[i];

        }

        else if(s[i]==')'){

            st.push(s[i]);

        }

        else if(s[i]=='('){

            while(!st.empty() && st.top()!=')'){

                res+=st.top();

                st.pop();

            }

            if(!st.empty()){

                st.pop();

            }

        }

        else{

            while(!st.empty() && prec(st.top())>prec(s[i])){

                res+=st.top();

                st.pop();

            }

            st.push(s[i]);

        }

    }

 

    while(!st.empty()){

        res+=st.top();

        st.pop();

    }

    reverse(res.begin(),res.end());

    return res;

 

}

 

int main(){

 

    cout<<infixToPrefix("a+b")<<endl;
    cout<<infixToPrefix("a+b*c+d")<<endl;
    cout<<infixToPrefix("(a+b)*(c+d)")<<endl;
    cout<<infixToPrefix("a*b+c*d")<<endl;
    cout<<infixToPrefix("a+b+c+d")<<endl;
    cout<<infixToPrefix("a+(b*c)")<<endl;
    cout<<infixToPrefix("k+i-m*n+(o^p)*w/u/v*t+q")<<endl;
  
}

//balanced parenthesis
#include <iostream>
using namespace std;
#include <stack>

bool checkBalanced(char *exp) {
    stack<char> s;
    int i = 0;
	while(exp[i]!=NULL){
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
            s.push(exp[i]);
        }
        else if(exp[i]=='}'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='{'){
                s.pop();
            }
            else
                return false;
        }
        else if(exp[i]==']'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='['){
                s.pop();
            }
            else
                return false;
        }
        else if(exp[i]==')'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='('){
                s.pop();
            }
            else
                return false;
        }
        i++;
    }
    if(s.empty()){
        return true;
    }
    else
        return false;
}

int main() {
    char input[100000];
    cin.getline(input, 100000);
    if(checkBalanced(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

Expression evaluation
#include <bits/stdc++.h>
using namespace std;

int precedence(char op){
	if(op == '+'||op == '-')
	return 1;
	if(op == '*'||op == '/')
	return 2;
	if(op == '^')
	return 3;
	
	return 0;
}

// Function to perform arithmetic operations.
int applyOp(int a, int b, char op){
	switch(op){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
		case '^' : return pow(b,a);
	}
		
}


int evaluate(string tokens){
	int i;
	
	stack <int> values;
	
	stack <char> ops;
	
	for(i = 0; i < tokens.length(); i++){
		
		if(tokens[i] == ' ')
			continue;
		
		else if(tokens[i] == '('){
			ops.push(tokens[i]);
		}
		
		else if(isdigit(tokens[i])){
			int val = 0;
			
			while(i < tokens.length() &&
						isdigit(tokens[i]))
			{
				val = (val*10) + (tokens[i]-'0');
				i++;
			}
			
			values.push(val);
			
			i--;
		}
		
		else if(tokens[i] == ')')
		{
			while(!ops.empty() && ops.top() != '(')
			{
				int val2 = values.top();
				values.pop();
				
				int val1 = values.top();
				values.pop();
				
				char op = ops.top();
				ops.pop();
				
				values.push(applyOp(val1, val2, op));
			}
			
			// pop opening brace.
			if(!ops.empty())
			ops.pop();
		}
		
		else
		{
			while(!ops.empty() && precedence(ops.top())
								>= precedence(tokens[i])){
				int val2 = values.top();
				values.pop();
				
				int val1 = values.top();
				values.pop();
				
				char op = ops.top();
				ops.pop();
				
				values.push(applyOp(val1, val2, op));
			}
			
			ops.push(tokens[i]);
		}
	}
	
	// Entire expression has been parsed at this
	// point, apply remaining ops to remaining
	// values.
	while(!ops.empty()){
		int val2 = values.top();
		values.pop();
				
		int val1 = values.top();
		values.pop();
				
		char op = ops.top();
		ops.pop();
				
		values.push(applyOp(val1, val2, op));
	}
	
	// Top of 'values' contains result, return it.
	return values.top();
}

int main() {
	cout << evaluate("10 + 2 * 6") << "\n";
	cout << evaluate("100 * 2 + 12") << "\n";
	cout << evaluate("100 * ( 2 - 12 )") << "\n";
	cout << evaluate("100 * ( 2 + 12 ) / 14");
	cout << evaluate("2*(2*2)+14");
	return 0;
}

