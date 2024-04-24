#include<iostream>
using namespace std;
void swaparray(int *arr,int size){
    for(int i=0;i<size;i=i+2){
        if(i+2<size){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    swaparray(arr,size);
    printarray(arr,size);
}

