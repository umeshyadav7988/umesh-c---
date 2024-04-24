
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int hig(int a){
    int d;
    for(int i=0;i<=31;i++){
        int c = (1<<i);
        if(c&a){
            d = i;
        }
    }
    return d;
}
int32_t main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            int c = hig(a);
            mp[c]++;
        }
        int ans = 0;
        for(auto x : mp){
            int d = x.second;
            ans += ((d-1)*d)/2;
        }
        cout<<ans<<endl;
    }



Yash Wandhare, [23-03-2022 21:17]
XOR and AND



#include<bits/stdc++.h>
#define int long long int
using namespace std;
int hig(int a){
    int d;
    for(int i=0;i<=31;i++){
        int c = (1<<i);
        if(c&a){
            d = i;
        }
    }
    return d;
}
int32_t main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            int c = hig(a);
            mp[c]++;
        }
        int ans = 0;
        for(auto x : mp){
            int d = x.second;
            ans += ((d-1)*d)/2;
        }
        cout<<ans<<endl;
    }
}


def getlist():
    return list(map(int, input().split(" ")))

def solve(t):
    n = int(input())
    if n % 2 == 0:
        print(n//2)
    else:
        print(-(n + 1)//2)

for i in range(int(input())):
    solve(i)

sign moves
