// #include<iostream>
// using namespace std;

// int main(){
//     int arr[7]={3,5,63,65,45,76,89};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i=i+2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include <iostream>
// using namespace std;
// class A
// {
    // int id;
    // int count;
// public:
    // A() {
        // count++;
        // id = count;
        // cout << "constructor for id " << id << endl;
    // }
    // ~A() {
        // cout << "destructor for id " << id << endl;
    // }
// };
//   
// int main() {
    // A a[3];
    // return 0;
// }
// 

#include <iostream>
using namespace std;
class A
{
    int id;
    static int count;
public:
    A() {
        count++;
        id = count;
        cout << "constructor for id " << id << endl;
    }
    ~A() {
        cout << "destructor for id " << id << endl;
    }
};
  
int A::count = 0;
  
int main() {
    A a[3];
    return 0;
}