#include<iostream>

using namespace std;

void bubbleSort(int *,int,int);

int main()

{

    int i, arr[100];

    int n;

    cin>>n;

   

    for(i=0; i<n; i++)

        cin>>arr[i];

       

    int pass;

    cin >>pass;

    bubbleSort(arr,n,pass);

  

    cout<<endl;

    return 0;

}

void bubbleSort(int *arr,int n,int pass)

{

    int i, j, temp;

    for(i=0; i<n-1; i++)

    {

        for(j=0; j<(n-i-1); j++)

        {

            if(arr[j]>arr[j+1])

            {

                temp = arr[j];

                arr[j] = arr[j+1];

                arr[j+1] = temp;

            }

        }

        if(pass==i){

         for(i=0; i<n; i++)

        cout<<arr[i]<<" ";

        }

}

}