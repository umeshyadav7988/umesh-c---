#include<iostream>
using namespace std;

int main(){
    int arr[7]={2,3,4,3,2,4,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i]; //xor
    }
    cout<<ans<<endl;
    return 0;
}