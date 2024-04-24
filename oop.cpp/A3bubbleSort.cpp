// #include<iostream>

// using namespace std;

// void bubbleSort(int *,int,int);

// int main()

// {

//     int i, arr[100];

//     int n;

//     cin>>n;

//     for(i=0; i<n; i++)

//         cin>>arr[i];

//     int pass;

//     cin >>pass;

//     bubbleSort(arr,n,pass);

//     cout<<endl;

//     return 0;

// }

// void bubbleSort(int *arr,int n,int pass)

// {

//     int i, j, temp;

//     for(i=0; i<n-1; i++)

//     {

//         for(j=0; j<(n-i-1); j++)

//         {

//             if(arr[j]>arr[j+1])

//             {

//                 temp = arr[j];

//                 arr[j] = arr[j+1];

//                 arr[j+1] = temp;

//             }

//         }

//         if(pass==i){

//          for(i=0; i<n; i++)

//         cout<<arr[i]<<" ";

//         }

//     }

// }

// Selection Sort
//
// 4 3 2 10 12 1 5 6

// #include <iostream>
// using namespace std;
// 
Sort the elements in increasing order
// void selection_sort(int a[], int n)
// {
// 
    // for (int pos = 0; pos < n - 1; pos++)
    // {
// 
        int current = a[pos];
// 
        // int min_position = pos;
// 
        find out the element
// 
        // for (int j = pos + 1; j < n; j++)
        // {
// 
            // if (a[j] < a[min_position])
            // {
// 
                // min_position = j;
            // }
        // }
// 
        swap outside the loop
// 
        // swap(a[min_position], a[pos]);
    // }
// }
// 
// int main()
// {
// 
    // int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
// 
    // int n = sizeof(arr) / sizeof(int);
// 
    // selection_sort(arr, n);
// 
    // for (auto x : arr)
    // {
// 
        // cout << x << ",";
    // }
// 
    // return 0;
// }



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

        for(int i=start;i<=end;i+=1){
            arr[i]=temp[i=start];
        }
    }
    void MergeSort(int *arr,int start,int end){
        if(start<=end){
            int mid=(start+end)/2;
            MergeSort(arr,start,mid);
            Mergesort(arr,start+1,end);
            Merge(arr,start,mid,end);
        }
    }
}

int main(){
    
    int arr[]={3,4,25,7,34,63,8};

    int s=0;
    int n=sizeof(arr)/sizeof(int);
    int e=n-1;

    void MergeSort(int *arr, int start,int end){
        if(start<=end){
            int mid=(start+end)/2;
            MergeSort(arr,start,mid);
            MergeSort(arr,mid+1,end);
            Merge(arr,start,mid,end);
        }
    }
    return 0;
}