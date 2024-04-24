// #include<iostream>
// using namespace std;
// 
// int search(int a[],int n)
// {
    // int num,i,index=-1;
    // cin>>num;
    // for(i=0;i<n;i++)
    // {
        // if(a[i]==num)  
        // {
        // index=i;
        // }
    // }
// 
// return index;
// }
// int main()
// {
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {cin>>a[i];}
    // cout<<search(a,n)<<endl;
    // return 0;
// }

#include<iostream>
using namespace std;

int searchf(int a[],int n, int key ){
    int s=0;
    int e=0;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    } return -1;


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<searchf<<endl;

    return 0;
}