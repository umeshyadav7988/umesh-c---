#include<iostream>
using namespace std;
int f(int x,int y,int z)
{
    if(x>y && x>z)

    return x;
    elif(y>x && y>z)
    return y;

    else(z>x && z>y)
    return z;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<f(a,b,c)<<endl;
    
    // return 0;
}