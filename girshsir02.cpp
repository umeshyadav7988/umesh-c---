#include<iostream>
using namespace std;

int main(){
    int t,n,sum=0;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        while(n!=0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
        sum=0;
    }
    // return 0;
}