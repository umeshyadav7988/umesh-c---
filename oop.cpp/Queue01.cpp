#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout<<"size of the queue : "<<q.size()<<endl;

    q.pop();
    cout<<"size of the queue : "<<q.size()<<endl;

    cout<<"front of the queue : "<<q.front()<<endl;

    q.pop();

    cout<<"front of the queue : "<<q.front()<<endl;

    cout<<"back of the queue : "<<q.back()<<endl;

    cout<<"back of the queue : "<<q.back()<<endl;

    
    return 0;
}