#include<iostream>
using namespace std;

int main(){
    int row,col;
    for(row=1;row<=10;++row){
        for(col=1;col<=row;++col)
        cout<<"*"<<endl;
        for(col=1;col<=row;++col)
        cout<<"*"<<endl;
    }
    return 0;
}