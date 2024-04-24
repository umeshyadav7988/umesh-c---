#include <iostream>

using namespace std;

int main()
{3

    int i,j,n;
    cout<<"enter  number of row:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"#";
        }
    }
//   #include<iostream>
// using namespace std;
// int main
// {
    // int i,j;
    // cin>>i>>j;
    // for( ;i<=j;i++)
    // cout<<i<<" ";
    // return 0;
    // for(cin>>i>>j;i<=j;i++)
    // cout<<i<<"";

    
    int n, rev;
    cin>>n;
    for(rev=0;n!=0;rev=rev*10+n%10,n=n/10 );
    cout<<rev;
    int i=1;


//     for( ; ; )
//     {
//         if(i>=4)
//         break;
//         cout<<i++;
//     }
//     return 0;
} 




