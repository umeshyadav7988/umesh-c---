#include<iostream>
using namespace std;
int main ()
{
int arr[6] = { 1,2,0,0,1};
cout<<"\nInput list is "<<endl;
for(int i=0;i<6;i++)
{
cout <<arr[i]<<"\t";
}
for(int k=1; k<6; k++)
{
int t = arr[k];
int j= k-1;
while(j>=0 && t <= arr[j])
{
arr[j+1] = arr[j];
j = j-1;
}
arr[j+1] = t;
}
cout<<"\nSorted list is "<<endl;
for(int i=0;i<6;i++)
{
cout <<arr[i]<<"\t";
}
}