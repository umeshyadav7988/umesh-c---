#include<iostream>
#include<array>
using namespace std;

int main(){
    //int a[4]={1,2,3,4};
    array <int,4> a={1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    cout<<" front element :"<<a.front()<<endl;
    cout<<" last element :"<<a.back()<<endl;
    cout<<" empty or Not :"<<a.empty()<<endl;
    //2nd index
    cout<<" second element :"<<a.at(2)<<endl;

    return 0;
}