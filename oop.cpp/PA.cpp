// #include<iostream>
// using namespace std;
// int fun(int a){
//     if(a<0)
//     return (-fun(-a));
//     else
//     if(a<10){
//         return (a+1)%10;
//     }
//     else{
//         return (100*fun(a/10));
//     }
// }

// int main(){
//     int a;
//     cin>>a;
//     cout<<fun(a);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int gcd(int n,int j){
// if(n==0){
// return j;
// }
// return gcd(n%j,n);
// }
//
// int main(){
// int n,j;
// cin>>n>>j;
// cout<<gcd(n,j);
// return 0;
// }

// #include<iostream>
// using namespace std;
// int gcd(int n,int j){
// if(n!=0){
// return gcd(n,n%j);
// }
// return n;
// }
//
// int main(){
// int n,j;
// cin>>n>>j;
// cout<<gcd(n,j);
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
//
// int arr[6]={1,2,3,4,5,6};
// int i=0,j=6-1,count=0;
// while(i<j){
// int sum=arr[i]+arr[j];
// if(sum==7){
// count++;
// i++;
// j--;
// }
// else if(sum>7){
// j--;
// }
// else{
// i++;
// }
// }
// cout<<count<<endl;
// }

// #include <iostream>
// using namespace std;
// void m1 (int i, int f)
// {
// cout<<"m1-ii";
// }
//
// void m1(float f, int i)
// {
// cout<<"m1-fi";
// }
//
// int main()
// {
// m1(20,20);
// }

#include <bits/stdc++.h>
using namespace std;
int func1(int a)
{
    int m,n;
    if (a < 10) 
        return((10 * a) + a);
    else
	{
	    m = func1(a / 10);
	    n = func1(a % 10);
        return ((100 *  m) + n);
    }
}
int main()
{
      cout<<func1(7);

}