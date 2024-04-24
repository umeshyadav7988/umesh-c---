#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "fgghjkklkjhgf";
    string s="";
      s.push_back(str[0]);
      int i=1;
      for(int i=1;i<str.length();i++){
          if(s.find(str[i])==string::npos){
              s.push_back(str[i]);
          }
      }
      cout<<s;
}