#include <stdio.h>
void merge(int A[],int T,int left,int right){
    if(left<right){
        int mid,i,j,k,l,target;
        mid=(left+right)/2;
        i=left;j=mid+1;
        target=left;
        while(i<=mid && j=right){
            if(A[i]<=A[j]){
                T[target]=A[i];
                i=i+1;
            }
            else{
                T[target]=A[j];
                j=j+1;
                target=target+1;
            }
        }
        

    }

}
int main()
{
    // int a = 5;
    // int b = a;
    // cout<<" value of a is "<<b<<endl;
    // int *p = &a;
    // printf(" value of a %d",*p);

    int arr[10]={1,2,3,4};
    // printf(" = %d",*arr+3);
    // printf(" value = %d",1[arr]);
    // printf(" = %d",sizeof(arr[2]));
}