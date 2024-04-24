// #include<iostream>
// using namespace std;

// void f(int n){
//     if(n==1){
//         cout<<n<<" ";
//         return;
//     }
//     f(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     f(n);
    
//     return 0;
// }

#include<iostream>
using namespace std;

void f(int n){
    cout<<n<<" ";
    if(n==1){
    return;
    f(n-1);
    }

}
int main(){
    int n;
    cin>>n;
    f(n);
    
    return 0;
}



