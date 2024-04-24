#include<iostream>
using namespace std;
// void reverse(int a[],int n);
int main(){
    void reverse(int a[],int n);
    {
        int temp,i;
        for(i=0;i<n/2;i++)
        {
            temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp
        }
    }

    return 0;
}

// #include<iostream>
// using namespace std;
// int f(int a[],int n)
// {
    // int max=a[0];
// 
// 
    // return max;
// }
// int main(){
    // int n;
    // cin>>n ;
    // for(int i=0;i<n;i++)
    // cin>>a[i]
    // cout<<f(a,n)<<endl;
    // return 0;
// 
    // 
// }
// 