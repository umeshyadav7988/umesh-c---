#include<iostream>
#include<vector>
using namespace std;

void Merge(int *arr,int start,int mid,int end){
    int temp[end-start+1];

    int i=start;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k+=1;
            i+=1;
        }
        else{
            temp[k]=arr[j];
            k+=1;
            j+=1;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k+=1;
        i+=1;
    }
    while(i<=end){
        temp[k]=arr[j];
        k+=1;
        j+=1;
    }
}
int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    int n=sizeof(arr)/sizeof(int);
    void MergeSort(int *arr,int n,int end){
        if(s<e){
            int mid=(s+e)/2;
            MergeSort(arr,start,mid);
            MergeSort(arr,mid+1,end);
            Merge(arr,start,mid,end);
        }
    }

}