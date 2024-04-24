// #include<iostream>
// using namespace std;
// 
// int main(){
    // bool flag=false;
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
        // cin>>a[i];
    // }
    // int s;
    // cin>>s;
    // for(int i=0;i<n;i++){
        // if(a[i]==s){
            // cout<<1;
            // flag=true;
            // break;
        // }
    // }
    // {
        // if(flag==false)
        // cout<<-1;
    // }
    // return 0;
// }


#include<iostream>
using namespace std;
void f(int *a)
{
    cout<<sizeof(a)<<endl;
    int n=sizeof(a)/sizeof(int);
    // int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main(){
    int a[]={10,20,30,40,50,60};
    cout<<sizeof(a)<<endl;
    f(a);
    return 0;
}