// Linear_Search 

// a)  Check element found or not

// #include<iostream>
// using namespace std;
// 
// void f(int *a,int n,int x){
    // for(int i=0;i<n;i++){
        // if(a[i]==x){
            // cout<<x<<" found at "<<i<<endl;
        // }
    // }
    // cout<<" Not Found "<<endl;
// }
// int main(){
    // int t;
    // cin>>t;
    // while(t--){
        // int n;
        // cin>>n;
        //  int *a=new int[n];
        //  for(int i=0;i<n;i++){
            //  cin>>a[i];
        //  }
        //  int x;
        //  cin>>x;
        //  f(a,n,x);
    // }
    // return 0;
// }
// 
// 

// b)      Return index of the element

#include<bits/stdc++.h>
using namespace std;
int f(int *a,int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *a=new int[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int x;
        cin>>x;
        f(a,n,x);
        int found=f(a,n,x);
        if(found==-1){
            cout<<" Not Found "<<endl;
        }
        else{
            cout<<x<<" Found index "<<found<<endl;
        }
    }
}

