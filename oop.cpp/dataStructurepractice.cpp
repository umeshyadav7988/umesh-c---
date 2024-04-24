// // #include<iostream>
// // using namespace std;
// // #define PI 3.14

// // int main(){
// //     int r=5;
// //     // char c= 'a';
// //     double Area = PI*r*r;
// //     cout<<Area<<endl;
// //     // cout<<sizeof(PI)<<endl;
// //     // cout<<sizeof(c)<<endl;

// //     return 0;
// // }

// //factprial
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
//
// int umesh(int n){
//
// }
//
// int main(){
// int n;
// int ans=umesh(n);
// cout<<ans<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// void fun(int n){
// if(n==0){
// return;
// }
// cout<<n<<" ";
// fun(n-1);
// }
//
// int main(){
// int n;
// cin>>n;
// fun(n);
// /*
// for(int i=n;i>=0;i--){
// cout<<i<<" ";
// }*/
// return 0;
// }
//

// #include <stdio.h>
//
// int func(int a,int b){
// return (b+2*a);
// }
//
// int main()
// {
// int a=4,b=2,c=5;
// a=func(c,b);
// c=func(b,a);
// printf("%d %d %d",a,b,c);
// return 0;
//
// }

// #include<iostream>
// using namespace std;
// void reachHome(int src,int dest){
// if(src==dest){
// cout<<"pahuch gaya"<<endl;
// return;
// }
// src++;
// reachHome(src,dest);
// }
//
// int main(){
// int src=1,dest=10;
// reachHome(src,dest);
// return 0;
// }

// #include<iostream>
// using namespace std;
//  void func(int c, int a, int b)
// {
// printf("%d %d %d", c, b, a);
// }
//
// int main(){
// int x=1, y=2, z=3;
// func(x,x,x);
//
// }

#include <iostream>
using namespace std;

int main()
{

    int amt, amt2000, amt500, amt100, amt50, amt20, amt10, amt5, amt2, amt1;
    amt2000 = amt500 = amt100 = amt500 = amt50 = amt20 = amt10 = amt5 = amt2 = amt1 = 0;
    cin >> amt;
    if (amt >= 2000)
    {
        amt2000 = amt / 2000;
        amt -= amt2000 * 2000;
    }
    if (amt >= 500)
    {
        amt500 = amt / 500;
        amt -= amt500 * 500;
    }
    if (amt >= 100)
    {
        amt100 = amt / 100;
        amt -= amt100 * 100;
    }
    if (amt >= 50)
    {
        amt50 = amt / 50;
        amt -= amt50 * 50;
    }
    if (amt >= 20)
    {
        amt20 = amt / 20;
        amt -= amt20 * 20;
    }
    if (amt >= 10)
    {
        amt10 = amt / 10;
        amt -= amt10 * 10;
    }
    if (amt >= 5)
    {
        amt5 = amt / 5;
        amt -= amt5 * 5;
    }
    if (amt >= 2)
    {
        amt2 = amt / 2;
        amt -= amt2 * 2;
    }
    if (amt >= 1)
    {
        amt1 = amt / 1;
        amt -= amt1 * 1;
    }
    cout << amt2000 << " ";
    cout << amt500 << " ";
    cout << amt100 << " ";
    cout << amt50 << " ";
    cout << amt20 << " ";
    cout << amt10 << " ";
    cout << amt5 << " ";
    cout << amt2 << " ";
    cout << amt1 << " ";
}