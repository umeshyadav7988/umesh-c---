#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    cout<<"fibbonaci series "<<a<<" is "<<fib(a)<<endl;
    
    return 0;
}