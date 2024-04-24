// transpose the matrix

// #include<iostream>
// using namespace std;
// 
// int main(){
    // int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // 
    // for(int i=0;i<3;i++){
        // for(int j=i;j<3;j++){
            // int temp=A[i][j];
            // A[i][j]=A[j][i];
            // A[j][i]=temp;
        // }
    // }
    // for(int i=0;i<3;i++){
        // for(int j=0;j<3;j++){
            // cout<<A[i][j]<<" ";
        // }
        // cout<<"\n";
    // }
    // return 0;
    // 
// }

// #include<iostream>
// using namespace std;
// 
// int main(){
    // int n1,n2,n3;
    // cin>>n1>>n2>>n3;
// 
    // int m1[n1][n2];
    // int m2[n2][n3];
// 
    // for(int i=0;i<n1;i++){
        // for(int j=0;j<n2;j++){
            // cin>>m1[i][j];
        // }
    // }
        // for(int i=0;i<n2;i++){
            // for(int j=0;j<n3;j++){
                // cin>>m2[i][j];
            // }
        // }
        // int ans[n1][n3];
        // for(int i=0;i<n1;i++){
            // for(int j=0;j<n3;j++){
                //   ans[i][j]=0;
            // }
        // }
        // for(int i=0;i<n1;i++){
            // for(int j=0;j<n3;j++){
                // for(int k=0;k<n2;k++){
                    // ans[i][j]+=m1[i][k]*m2[k][j];
                // }
            // }
        // }
        // for(int i=0;i<n1;i++){
            // for(int j=0;j<n3;j++){
                // cout<<ans[i][j]<<" ";
                // cout<<endl;
            // }
            // return 0;
        // }
// 
// }

  
// strings in c++

#include<iostream>
// #include<string>
// using namespace std;

// int main(){
    // string str;

    // string str1="fam";
    // string str2="ily";
    // getline(cin,str);
    // str1.append(str2);
    // cout<<str1+str2<<endl;
    
    // cin>>str;
    // cout<<str<<endl;
    // return 0;
// }


// #include<iostream>
// using namespace std;
// 
// int main(){
    // string str="umeshyadavrao";
// 
    // for(int i=0;i<str.size();i++){
        // if(str[i]>='a' && str[i]<='z'){
            // str[i] -= 32;
        // }
        // cout<<str<<endl;
        // return 0;
    // }
// 
    // for(int i=0;i<str.size();i++){
        // if(str[i]>='A' && str[i]<='Z'){
            // str[i] += 32;
        // }
        // cout<<str<<endl;
    // }
    // return 0;
// }


// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// 
// int main(){
    // string s="umeshyadavrao";
// 
    // transform(s.begin(),s.end(),s.begin(),::toupper);
    // cout<<s<<endl;
// 
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    // cout<<s<<endl;
    // return 0;
// }


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s ="7988167212";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}