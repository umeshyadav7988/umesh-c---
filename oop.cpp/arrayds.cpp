#include <bits/stdc++.h>
using namespace std;

void f(int * a,int n,int x){
for(int i=0;i<n;i++)
{
  if (a[i]==x){
    cout <<x <<" Found at "<<i<<endl;
    return;
    }
}
cout <<x <<" Not Found"<<endl;
}
int main(){
  int t;
  cin >>t;
  while(t--){
    int n;
    cin >>n;
    int *a =new int[n];
    for(int i=0;i<n;i++)
      cin >>a[i];
    int x;
    cin >>x;
      f(a,n,x);
  }
return 0;

}