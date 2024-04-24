// #include<iostream>
// using namespace std;
// void countFreq(int arr[],int n){
    // for(int i=0;i<n;i++){
        // int count=1;
        // for(int j=i+1;j<n;j++){
            // if(arr[i]==arr[j]){
                // count++;
            // }
        // }
        // cout<<arr[i]<<" "<<count<<endl;
    // }
// 
// }
// 
// int main(){
    // 
    // int arr[]={10,20,20,10,10,20,5,20};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // countFreq(arr,n);
    // return 0;
// }

// #include<iostream>
// using namespace std;

// void countFreq(int *arr,int n){
    // for(int i=0;i<size;i++){
        // freqMap[arr[i]]++;
    // }
    // for(auto it:freqMap){
        // cout<<it.first<<it.second<<endl;
    // }

// }
// int main(){
    // 
    // return 0;
// }

// #include<iostream>
// using namespace std;
// 
// int main(){
    // string str="CodingCodeKaze";
// 
    // unodered_map<char, int> freq;
    // for(const char c:str){
        // freq[c]++;
    // }
    // for(auto pair:freq){
        // cout<<pair.first<<pair.second<<endl;
    // }
    // 
    // return 0;
// }


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
     this->data=data;
     this-next=NULL;
    }
};

int main(){
    
    return 0;
}