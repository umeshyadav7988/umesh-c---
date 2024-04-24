// #include<bits/stdc++.h>
// using namespace std;
// int varifyPrime(int n){
//     if(n<=1){
//     return 0;
//   }
//   int a=sqrt(n);
//   for (int i = 2; i <= a; i++)
//         if (n % i == 0)
//             return 0;
//         return 1;
// }
// int main(){
//     int t,no;
//     cin>>t;
//     while(t--){
//         cin>>no;
//         if(varifyPrime(no)){
//             cout<<"Prime";
//         }
//         else{
//             cout<<"Not Prime";
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// void greater(int a,int b){
// if(a>b){
// cout<<a<<endl;
// }
// else{
// cout<<b<<endl;
// }
// }
// int main(){
// int a,b;
// cin>>a>>b;
// greater(a,b);
// return 0;
// }

// #include <iostream>
// using namespace std;
//
// #define MAX_SIZE 1000 // Maximum size of the stack
//
// class Stack {
//   private:
// int top;
// int data[MAX_SIZE];
//   public:
// Stack() { top = -1; } // Constructor to initialize top to -1
//
// bool is_empty() { return top == -1; } // Returns true if stack is empty
// bool is_full() { return top == MAX_SIZE - 1; } // Returns true if stack is full
//
// void push(int item) {
// if (is_full()) {
// cout << "Stack overflow\n";
// return;
// }
// data[++top] = item; // Increment top and add item to the stack
// }
//
// int pop() {
// if (is_empty()) {
// cout << "Stack underflow\n";
// return -1;
// }
// return data[top--]; // Decrement top and return the item at the top of the stack
// }
//
// int peek() {
// if (is_empty()) {
// cout << "Stack is empty\n";
// return -1;
// }
// return data[top]; // Return the item at the top of the stack
// }
//
// int size() { return top + 1; } // Returns the number of items in the stack
//
//
//
//
// #include<bits/stdc++.h>
// #include<stack>
// using namespace std;
// class stack{
// public:
//
// }
// int main(){
//
// <stack> a;
//
// return 0;
// }
//
//

// #include<iostream>
// template<typename T>
// using namespace std;
// template <typename T>
// class stack{
// int top=-1;
// T element;
// T stack[10];
// int size=10;
// public:
// void stackPush(T a){
// element=a;
// if(top==size-1){
// cout<<"stack overflow";
// }
// else{
// top=top+1;
// stack[top]=element;
// }
// }
// void stackPrint(){
// for(int i=top;i>=0;i--){
// cout<<stack[i];
// }
// }
// }
// int main(){
// stack  s;
// s.stackPush(10);
// s.stackPush(8);
// s.stackPush(11);
// s.stackPrint();
//
//
// return 0;
// }

#include <iostream>
using namespace std;
class Complex
{
    float real;
    float imag;

public:
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    conplex()
    {
    }
    Complex Add(Complex c2)
    {
        Complex c3;
        c3.real = this->real + c2.real;
        c3.imag = this->imag + c2.imag;
    }
    return c3;
    void showComplex()
    {
        cout << real << " " << imag << 'i';
    }
} int main()
{
    Complex c1(10, 20);
    Complex c2(8, 14);
    Complex c3;
    c3 = c1.Add(c2);
    c3.showComplex();
}