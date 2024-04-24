// c) Binary Search 

// #include<iostream>
// using namespace std;
// 
// int bs(int *a,int n,int x){
    // int s=0;
    // int e=n-1;
    // int mid=(s+e)/2;
    // while(s<=e){
        // if(a[mid]==mid){
            // return mid;
        // }
        // else if(a[mid]>=mid){
            // e=mid-1;
        // }
        // else{
            // s=mid=1;
        // }
    // }
    // return -1;
// }
// int main(){
    // int t;
    // cin>>t;
    // while(t--){
        // int n;
        // cin>>n;
        // int *a=new int[n];
        // for(int i=0;i<n;i++){
            // cin>>a[i];
        // }
        // int x;
        // cin>>x;
        // int index=bs(a,n,x);
        // if(index==-1){
            // cout<<x<<" index is Not found "<<endl;
        // }
        // else{
            // cout<<x<<" index is found at "<<index<<endl;
        // }
    // }
    // return 0;
// }




// d) Insertion of element in an array

// #include<iostream>
// using namespace std;
// 
// int *f(int *arr,int n,int pos,int x){
    // for(int i=n;i<pos;i--)
        // arr[pos]=arr[i-1];
// 
        // arr[pos]=x;
// 
        // return arr;
// 
// }
// int main(){
    // int t;
    // cin>>t;
    // while(t--){
        // int n;
        // cin>>n;
// 
        // int *a=new int[n];
        // for(int i=0;i<n;i++){
            // cin>>a[i];
        // }
// 
        // int pos;
        // cin>>pos;
// 
        // int x;
        // cin>>x;
        // int a=f(a,n,pos,x);
        // for(int i=0;i<n;i++){
            // cout<<a[i];
        // }
    // }
    // return 0;
// }