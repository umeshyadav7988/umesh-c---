// #include<iostream>
// using namespace std;
// 
// int f(int n){
    // if(n==4){
        // return n;
    // }
    // else 
    // return 2*f(n+1);
// };
// 
// int main(){
    // cout<<f(2);
    // 
    // return 0;
// }

#include<iostream>
using namespace std;

int f(int x,int y){
    if(x==0)
        return y;
    return f(x-1,x+y)
}
int main(){
    cout<<f(4,3)<<endl;
    return 0;
}