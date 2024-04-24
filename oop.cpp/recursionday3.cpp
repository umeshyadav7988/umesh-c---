//sorted array or not sorted array using recursion
//25-07-2022
// #include<iostream>
// using namespace std;
// 
// int  issorted(int *arr , int  size){
    // if(size==0 || size==1){
        // return true;
    // }
    // if(arr[0]>arr[1]){
        // return false;
    // }
    // else{
        // return  issorted(arr+1,size-1);
    // }
// }
// 
// int main(){
    // int size;
    // size=6;
    // int arr[10]={1,2,3,7,5,6};
    // int ans = issorted(arr,size);
    // if(ans){
        // cout<<" is sorted array";
    // }
    // else{
        // cout<<"is not sorted array";
    // }
    // return 0;
// }


//sum of array using recursion
// #include<iostream>
// using namespace std;
// 
// int getsum(int *arr,int size){
    // if(size==0){
        // return 0;
    // }
    // if(size==1){
        // return arr[0];
    // }
    // else{
        // int remaining=getsum(arr+1,size-1);
        // return arr[0]+remaining;
    // }
// }
// int main(){
    // int arr[10]={1,2,3,4,5,6};
    // int size=6;
    // int ans=getsum(arr,size);
    // cout<<" sum of array = "<<ans;
// 
    // return 0;
// }


//Binary search using recursion
#include<iostream>
using namespace std;

void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binary(int *arr,int s,int e,int k){
    cout<<endl;
    print(arr,s,e);
   
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    cout<<"value of arr mid is "<<arr[mid]<<endl;
    if(arr[mid]==k){
        return arr[mid];
    }
    if(arr[mid]>k){
        return binary(arr,s,mid-1,k);
    }
    else{
        return binary(arr,mid+1,e,k);
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    int key=9;
    int ans = binary(arr,0,size-1,key);
    cout<<"Number is present = "<<ans<<endl;
    return 0;
}