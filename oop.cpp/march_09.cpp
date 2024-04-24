// #include<iostream>
// using namespace std;

// void f(int n){

//     cout <<n<<" ";//input-4  output-4 5 5 4 

//     if (n < 5) {

//         f(n + 1);

//     }
//     cout <<n<<" ";

// }
// int main(){

//     int n;

//     cin >> n;

//     f(n);

// }

// #include<iostream>
// using namespace std;
// 
// void f(int n){
    // if (n >= 1) {
// 
        //  cout <<n<<" ";//input-5 output- 5 4  3 2 1 1 2 3 4 5
// 
        // f(n - 1);
// 
        // cout <<n<<" ";
        // }
// }
// int main(){
// 
    // int n;
// 
    // cin >> n;
// 
    // f(n);
// 
// }

#include<iostream>
using namespace std;

void print(int n){

    cout << n << " ";//input-4 output-4 3 2 1 

    if(n == 1){
        return;

    }

    print(n - 1);
}
int main(){

    int n;

    cin >> n;

    print(n);

}