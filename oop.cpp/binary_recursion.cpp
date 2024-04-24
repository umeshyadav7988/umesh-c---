#include<iostream>
using namespace std;

int  binary(int arr[],int start,int end,int k){
    // int mid = start+(start-end)/2;
    if(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]>k){
            return binary(arr,start,mid-1,k);
        }
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            return binary(arr,mid+1,end,k);
        }
    }
    return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int k=12;
    int u = binary(arr,0,9,k);
    if(u!=-1){
        cout<<" Element is  found"<<" "<<u<<" ";
    }
    else{
        cout<<"Element is not found"<<" "<<u<<" ";
    }
    return 0;
}