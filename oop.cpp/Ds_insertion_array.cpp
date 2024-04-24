#include<iostream>
#include<vector>
using namespace std;

// void display(int arr,int n){
    // for(int i=0;i<n;i++){
        // cout<<arr[i];
    // }
// }
// int indInsertion(int arr[],int size,int element,int capacity,int index){
    // if(size>=capacity){
        // return -1;
    // }
    // for(int i=size-1;i>=index;i--){
        // arr[i+1]=arr[i];
    // }
    // arr[index]=element;
    // return 1;
// }
// int main(){
    // int arr[100]={1,20,7,5,4};
    // int size=3,element=5,index=3;
    // indInsertion(arr,size,element,100,index);
    // size+=1;
    // return 0;
// }

#include<iostream>
using namespace std;

void indDeletion(int arr[],int size,int index){
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int arr[100]={7,9,8,8,1};
    int size=1,element=32,index=0;
    indDeletion(arr,size,index);
    return 0;
}