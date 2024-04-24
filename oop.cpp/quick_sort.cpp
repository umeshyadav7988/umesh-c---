#include<iostream>
#include<cstdlib>
using namespace std;
// Swapping two values.
void swap(int *a, int *b)
{
                int temp;
                temp = *a;
                *a = *b;
                *b = temp;
}
// Partitioning the array on the basis of values at high as pivot value.
int Partition(int a[], int low, int high)
{
                int pivot, index, i;
                index = low;
                pivot = high;
                // Getting index of the pivot.
                for(i=low; i < high; i++)
                {
                                if(a[i] < a[pivot])
                                {
                                                swap(&a[i], &a[index]);
                                                index++;
                                }
                }
                // Swapping value at high and at the index obtained.
                swap(&a[pivot], &a[index]);
                for(i=low;i<=high;i++)
                    cout<<a[i]<<" ";
                    cout<<endl;
                    cout<<"index="<<index<<endl;
                return index;
}
// Random selection of pivot.
int QuickSort(int a[], int low, int high) 
{
                int pindex;
                if(low < high)
                {
                                // Partitioning array using randomized pivot.
                                pindex = Partition(a,0,high);
                                // Recursively implementing QuickSort.
                                QuickSort(a, low, pindex-1);
                                QuickSort(a, pindex+1, high);
                }
                return 0;
}
int main()
{
                int n, i;
                cin>>n;
                int arr[n];
                for(i = 0; i < n; i++)
                {
                    cin>>arr[i];
                }
                QuickSort(arr, 0, n-1);
                cout<<"\nSorted Data ";
                for (i = 0; i < n; i++)
                cout<<"->"<<arr[i];
                return 0;
}