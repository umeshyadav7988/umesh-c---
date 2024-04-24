#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    int i,j,sum=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(i=0<i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    for(i=0;i<c;i++){
        sum=0;
        for(j=0;j<r;j++){
            sum=sum+a[i][j]
        }
        cout<<"sum of column"<<i+1<<"="<<sum<<endl;
    }
    return 0;
}