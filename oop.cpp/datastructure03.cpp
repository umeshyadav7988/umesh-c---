// #include<iostream>
// using namespace std;
// void f(int n){
    // cout<<n<<" ";
    // if(n<5){
        // f(n+1);
    // }
    // cout<<n<<" ";
// 
// }
// int main(){
    // int n;
    // cin>>n;
    // f(n);
    // 
    // return 0;
// }


// #include<iostream>
// using namespace std;
// int fib(int n){
    // if(n==0){
        // return 0;
    // }
    // if(n==1 || n==2){
        // return 1;
    // }
// 
// }
// int main(){
    // int n=5;
    // for(int i=0;i<n;i++){
        // cout<<fib(i)<<" ";
    // }
// 
    // 
    // return 0;
// }


#include<iostream>
using namespace std;

int f(int n){
    if(n==4){
        return n;
    }
    else 
    2*f(n+1);
}
int main(){
    cout<<f(2);
    
    return 0;
}