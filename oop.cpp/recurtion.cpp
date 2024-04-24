#include<iostream>
using namespace std;

int f(int *input,int n){
    if(n==0){
        return 0;
    }
    return input[0]+f(input + 1, n-1);
}
int main(){
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<f(input,n)<<endl;
    return 0;
}