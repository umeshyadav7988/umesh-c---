#include<iostream>
using namespace std;

int main(){
    float n1,n2;
    cout<<"Enter the two number:";
    cin>>n1>>n2;

    char op;
    cout<<"input an operatpor";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n1<<endl;
    break;

    case '-':
        cout<<n1-n1<<endl;
    break;

    case '/':
        cout<<n1/n1<<endl;
    break;

    case '*':
        cout<<n1*n1<<endl;
    break;
    
    default:
        cout<<"enter another operator"<<endl;
        break;
    }
    return 0;
}