
// #include<iostream>
// using namespace std;
// 
// void f(int arr[],int n;int pos,int x){
    // int i;
    //  shift element forward
    // for(i=n;i>pos;i--){
        // arr[i]=arr[i-1];

    //    insert x at pos 
        // arr[pos]=x;
    // }
// }

// int main(){
    // int t,x;
    // cin>>t;
    // while(t--){
        // int n;
        // cin>>n;

        // int *a=new int[n+1];

        // for(int i=0;i<n;i++){
            // cin>>a[i];

            // int pos;
            // cin>>pos;

            // int x;
            // cin>>x;
            // f(a,n,pos,x);

            // for(int i=0;i<n+1;i++){
                // cout<<a[i]<<" ";
                // cout<<endl;
            // }
        // }
    // }
    // return 0;
// }


// #include<iostream>
// using namespace std;
// void f( int arr[], int n, int pos, int x){
// int  i;
// for(i=n;i>pos;i--)
// arr[i]=arr[i-1];
// arr[pos]=x;
// 
// }
// int main(){
//  int t;
//  cin>>t;
//  while( t--){
    // int n;
    // cin>>n;
    // int  * a = new int [n+1];
    // for( int i=0;i<n;i++)
    // cin>>a[i];
    // int pos;
    // cin>>pos;
    // int x;
    // cin>> x;
    // f(a,n,pos,x);
    // for( int i=0;i<n+1;i++)
    // cout<<a[i]<<" ";
    // cout<<endl;
    // delete[]a;
//  }
//  return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n,i,ele,j,found=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            for(j=i;j<(n-1);j++){
                arr[j]=arr[j+1];
                found=1;
                break;
            }
        }
        if(found==0)
        cout<<"\nElement not found in the array!";
        else{
            cout<<"\nElement Deleted Successfully!";
            cout<<"\n\nThe new Array is : ";
            for(i=0;i<n-1;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}