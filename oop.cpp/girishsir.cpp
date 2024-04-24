// #include<iostream>
// using namespace std;
// 
// void f(int n){
    // if(n>4000)
    // return;
    // cout<<n<<" ";
    // f(2*n);
    // cout<<n<<" ";
// }
// int main(){
    // f(1000);
    // return 0;
// }

// #include<iostream>
// using namespace std;
// int f(int *input,int n){
    // if(n==0){
        // return 0;
    // }
    // return input[0]+f(input+1,n-1);
// }
// int main(){
    // int n;
    // cin>>n;
    // int input[n];
    // for(int i=0;i<n;i++){
        // cin>>input[i];
    // }
    // cout<<f(input,n);
    // 
    // return 0;
// }

#include<iostream>
using namespace std;
void mergeSort(int *Arr, int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        mergeSort(Arr,start,mid);
        mergeSort(Arr,mid+1,mid);
        mergeSort(Arr,start,mid,end);
    }
}

int main(){
    int arr[]={4,3,2,10,12,1,5,6};
    int s=0;
    int n=sizeof(arr)/sizeof(int);
    int e=n-1;

    mergeSort(arr,s,e);
    for(int x:arr){
        cout<<x<<","<<endl;
    }
    return 0;
}