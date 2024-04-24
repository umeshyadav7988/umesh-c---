// //reverse string

// // #include<iostream>
// // using namespace std;
// // 
// // int main(){
//     // string s="umesh";
//     // int i=0,j=s.length()-1;
//     // while(i<j){
//         // swap(s[i],s[j]);
//         // i++;
//         // j--;
//     // }
//     // cout<<s<<endl;
// // }


// #include<iostream>
// using namespace std;
// void reverse(int i,int j,string &s){
//     cout<<"call received for "<<s<<endl;
//     if(i>j){
//         return ;
//     }
//     swap(s[i],s[j]);
//     i++;
//     j--;
//     reverse(i,j,s);
// }

// int main(){
//     string s="umeshyadav";
//     cout<<endl;
//     reverse(0,s.length()-1,s);
//     cout<<endl;
//     cout<<s<<endl;

//     return 0;
// }