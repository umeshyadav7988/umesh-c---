#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    point p1;
    p1.accept();
    p1.print();

    cout<<" x="<<p1.getX()<<endl;
    cout<<" Y="<<p1.getY()<<endl;

    cout<<fixed<<setprecision(2);
    cout<<"mag="<<p1.getMagnitude()<<endl;
    cout<<"arg="<<p1.getArgument()<<endl;

    testcodetantra.cpp
    
    
    return 0;
}