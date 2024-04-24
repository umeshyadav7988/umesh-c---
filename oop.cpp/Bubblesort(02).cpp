// #include<iostream>
// using namespace std;
// void bubbleSort(int *a,int b);
// int main(){
// int i,arr[100];
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>arr[i];
//
// bubbleSort(arr,n);
//
// for(int i=0;i<n;i++)
// cout<<arr[i]<<" ";
// cout<<endl;
// return 0;
// }
// void bubbleSort(int *arr,int n);
// int i,j,temp;
// for(int i=0;i<n-1;i++){
// if(arr[j]>arr[j+1]){
// temp=arr[j];
// arr[j]=arr[j+1];
// arr[j+1]=temp;
// }
// cout<<"Pass "<<i+1;
// for(j=0;j<n;j++){
// cout<<" "<<arr[i];
// cout<<endl;
// }
// }
// }
// return 0;
// }

#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    int i, key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
};

int main()
{
    int i, arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionsort(arr, n);
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;
void selectionsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int main
    }
}
int main(
     // 
    // return 0;
// }