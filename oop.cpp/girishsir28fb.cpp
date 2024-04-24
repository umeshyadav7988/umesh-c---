#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>1){
        if(n%2==0){
            cout<<n/2<<endl;
        }
        else{
            cout<<(n*3)+1<<endl;
        }
    }
    return 0;
}

// find missing number 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0,ele;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>ele;
        s+=ele;
    }
    cout<<n*(n+1)/2-s<<endl;
    return 0;
}





#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=a[i]*a[i];
    }
    
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}