#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<"The sum of 3 and 6 is:"<<sum(3,6)<<endl;
    cout<<"The sum of 3 ,6 and 7 is:"<<sum(3,6,7);

    return 0;
}