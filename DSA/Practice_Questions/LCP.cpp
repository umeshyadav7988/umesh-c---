#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {geeksforgeeks, geeks, geek,geezer};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    string ans;
    for(int i=0;i<arr[0].length();i++){
        string x = arr[0];
        string y = arr[4-1];

        if(x[i]==y[i]){
            ans.push_back(x[i]);
        }
        else{
            break;
        }
    }
    if(ans==""){
        cout<<"-1"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}