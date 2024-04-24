#include<iostream>
#include<deque>
using namespace std;

int main(){
    
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);


    cout<<"front element : "<<d.front()<<endl;
    cout<<"last element : "<<d.back()<<endl;


    cout<<"print first element in the index : "<<d.at(1)<<endl;
    cout<<" before erase size : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+2);
    cout<<" After erase size : "<<d.size()<<endl;

    for(int i:d){
        cout<<d[i]<<endl;
    }
    return 0;
}