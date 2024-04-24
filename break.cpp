// #include<iostream>
// using namespace std;
// 
// int main(){
    // for(int i=1;i<40;i++)
    // {
        // cout<<i<<endl;
        // if (i==4)
        // {
            // break;  
        // }
        // cout<<i<<endl;
    // }
    // return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int i=1;
    for( ; ; )
    {
        if(i>=4)
        break;
        cout<<i++;
    }
    return 0;
}