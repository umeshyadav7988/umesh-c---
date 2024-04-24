#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> u;
    u.push_back(2);
    u.push_back(3);
    u.push_back(4);

    for(int i=0;i<u.size();i++){
        cout<<u[i]<<" ";
    }// 2 3 4 output

    for(auto element:u){
        cout<<element<<" ";
    }// 2 3 4 output

    vector<int>::iterator it;
    for(it=u.begin();it!=u.end();it++){
        cout<<*it<<" ";

    }//2 3 4 output

    u.pop_back();

    vector<int> u2 (3,2);
    //2 2 2 output

    swap(u,u2);
    for(auto element:u){
        cout<<element<<" "<<endl;
    }
    for(auto element:u2){
        cout<<element<<" "<<endl;
    }

    // sort(u.begin(),u.end());
    
    return 0;
}