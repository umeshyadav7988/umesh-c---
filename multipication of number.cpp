#include<iostream>
using namespace std;
int product(int a,int b){
    return a*b;
}
float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney*factor;
}
int main(){
    int a, b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    // cout<<"enter product of a and b is"<<product(a,b);
    cout<<"if you have"<<money<<"Rs in your bank account,you will recive"<<moneyreceived(money)<<"Rs after 1 year";
    return 0;
}