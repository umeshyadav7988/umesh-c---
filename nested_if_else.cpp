#include<iostream>
using namespace std;

int main(){
    int math,physics,chemistry;
    math=60;
    physics=45;
    chemistry=70;
    if ((math>=60) && (physics>=45) && (chemistry>=45))
    cout<<"Pass"<<endl;
    else
    cout<<"Fail"<<endl;
    return 0;
}