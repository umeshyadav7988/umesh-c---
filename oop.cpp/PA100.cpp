//merge interval
//hour glass
//peak elements
#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;
char minIndexChar(string str1, string str2){
  int len=str1.length();
  int len1=str2.length();
  int i=0,j=0;
  while(len!=0){
  if(str1[i]==str2[j]){
    return i;
  }
  else{
    i++;
    j++;
  }
  }
  return 0;
}

int main(){
  int t,i,j=0;
  string a, b;
  cin>>t;
  while(t--)
  {
    cin>>a;
    cin>>b;
    char minIndex = minIndexChar(a, b);
    if(minIndex == 0){
      cout<<0;
    }else{
      cout<<minIndex;
    }
    cout<<endl;
  }
  return 0;
}