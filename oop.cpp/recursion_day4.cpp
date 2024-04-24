//swap string
// #include<iostream>
// using namespace std;
// 
// void reverse(string &str,int i,int j){
    // cout<<"Call received for "<<str<<endl;
    // base case
    // if(i>j)
        // return ;
    // swap(str[i],str[j]);
    // i++;
    // j--;
    // reverse(str,i,j);
// 
// }
// int main(){
    // string name="umesh";
    // cout<<endl;
    // reverse(name,0,name.length()-1);
    // cout<<endl;
    // cout<<name<<" ";
    // return 0;
// }



// check palindrom or not 
#include<iostream>
using namespace std;

bool palindrom(string str,int i,int j){
    // base case 
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        // recursive call 
        return palindrom(str,i+1,j-1);
    }
}
int main(){
    string  name="umesh";
    bool ispalindrom = palindrom(name,0,name.length()-1);
    if(ispalindrom){
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"its not a palindrom"<<endl;
    }
}
