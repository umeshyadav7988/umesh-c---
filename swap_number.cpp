// #include<iostream>
// using namespace std;
// void swap(int , int);
// int main(){
    // int num1,num2;
    // cin>>num1;
    // cin>>num2;
    // swap(num1,num2);
// 
// }
// void swap(int num1,int num2)
// {
    // int num3;
    // num3=num2;
    // num2=num1;
    // num1=num3;
    // cout<<num1<<num2;
// }
// 
#include<iostream>
using namespace std;
void swap (int num1, int num2) //&num1 and &bnum2 are Reference variables
{
        int c;
        c=num1;
        num1=num2;
        num2=c;
}
int main()
{
        int a=5,b=10;
        cout<<"\n Before swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        swap(a,b);
        cout<<"\n After swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        return 0;
}