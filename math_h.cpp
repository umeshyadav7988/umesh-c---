// #include<iostream>
// using namespace std;
// 
// int main(){
  // int a =100;
  // double b=3.14;
  // cout<<a<<endl;
  // cout<<b<<endl<<a*b;
  // endl(cout);
// 
  // return 0;
// }
// 


// #include<iostream>
// using namespace std;
// 
// int main(){
  // const int x = 3;
  // const int y = 3;
  // int z;
  // z = x + y;
// }


// #include<iostream>
// using namespace std;
// 
// int main(){
  // int i = -5;
  // int k= i % 2;
  // cout<<k;
  // int a=5,b=3,c=2;
  // b=!a;
  // c=!!a;
  // cout<<b<<" "<<c;

  // #include<iostream>
  // using namespace std;
  // 
  // void main(){
    // int x,y,z,k;
    // x=10;
    // y=-x;
    // z=x++;
    // k=++x;
    // 
  // }

  // #include<iostream>
  // using namespace std;
  // 
  // int main(){
    // int marks=70, pass_marks=75;
    // (marks>pass_marks) ? cout<<"passes":cout<<"failed";
    // return 0;
  // }
// }

// #include<iostream>
// using namespace std;
// 
// int main(){
  // int b = 15,c=5,d = 8,e=8,result;
  // result=b>c ? c>d? 12: d>e ? 13 : 14 : 15;
  // cout<<result;
  // return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
  // int a;
  // a = 1000 + 1000 > 1750 ? 400 : 200;
  // cout<<"a="<<a<<"\n";
  // return 0;
// }

// #include<iostream>
// using namespace std;
// 
// int main(){
  // float a,b;
  // a = 7/3;
  // b = (float)7/3;
  // cout<<"x="<<a<<"y="<<b<<endl;
  // return 0;
// }


// C++ program to find if an integer is positive, negative or zero
// using nested if statements

#include <iostream>
using namespace std;

int main() {

  int num;
    
  cout << "Enter an  integer: ";  
   cin >> num;    

  // outer if condition
  if (num != 0) {
        
    // inner if condition
    if (num > 0) {
      cout << "The number is positive." << endl;
    }
    // inner else condition
    else {
      cout << "The number is negative." << endl;
    }  
  }
  // outer else condition
  else {
    cout << "The number is 0 and it is neither positive nor negative." << endl;
  }

  cout << "This line is always printed." << endl;

  return 0;
}