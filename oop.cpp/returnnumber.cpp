#include<iostream>
using namespace std;

int f(int n){
    if(n==0){
        return 0;}
    return f(n/10)+1;}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}