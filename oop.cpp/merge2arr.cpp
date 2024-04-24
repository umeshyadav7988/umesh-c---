
// #include<iostream>
// using namespace std;

// int main(){
//     int a[5]={1,3,4,5,6};
//     int b[5]={7,6,3,5,9};
//     int n=sizeof(a)/sizeof(a[0]);
//     int m=sizeof(b)/sizeof(b[0]);
//   int *c = new int[n+m];
//   int i=0,j=0,k=0;
//   while(i<n && j<m){
//     if(a[i]<b[j]){
//       c[k]=a[i];
//       i++;
//       k++;
//     }
//     else{
//       c[k]=b[j];
//       k++;
//       j++;
//     }
//   }
//   while(i<n){
//     c[k]=a[i];
//       i++;
//       k++;
//   }
//   while(j<m){
//     c[k]=b[j];
//       j++;
//       k++;
//   }
//   for(int i=0;i<10;i++){
//       cout<<c[i]<<' ';
//   }
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int arr1[a];
    int arr2[b];
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<b;j++){
        cin>>arr2[j];
    }
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    int ar1first=0;
    int ar1last=n-1;
    int ar2first=0;
    int ar2last=m-1;
    int mid1=(ar1first+ar1last)/2;
    int mid2=(ar2first+ar2last)/2;
    int noise=0;
    while(n>0){
        if(arr1[mid1]==arr2[mid2]){
            
        }
    }
}