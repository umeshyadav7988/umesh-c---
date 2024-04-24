// // #include <iostream>
// // using namespace std;
// // class Complex
// // {

// // public:
// //     float real;
// //     float imag;
// //     Complex(float r, float i)
// //     {
// //         real = r;
// //         imag = i;
// //     }
// //     Complex()
// //     {
// //     }
// //     Complex Add(Complex c2)
// //     {
// //         Complex c3;
// //         c3.real = this->real + c2.real;
// //         c3.imag = this->imag + c2.imag;
// //         return c3;
// //     }
// //     void showComplex()
// //     {
// //         cout << real << " + " << imag << "i";
// //     }
// // };
// // int main()
// // {
// //     Complex c1(10, 20);
// //     Complex c2(8, -14);
// //     Complex c3;
// //     c3 = c1.Add(c2);
// //     c3.showComplex();
// // }

// #include <iostream>
// #include <vector>
// using namespace std;
// display(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i]<<" ";
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> v;
//     cout << v.size();
//     int x;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> x;
//         v.push_back(x);
//     }
//     display(v);
//     cout << v.size();
//     v.push_back(6.6);
//     display(v);
//     vector<int>::iterator itr = v.begin();
//     // vector<int>::iterator itr = v.rbegin();

//     itr = itr + 2;
//     v.insert(itr, 6);
//     return 0;
// }

// // begin


// #include<iostream>
// using namespace std;
// 
// int main(){
    // int x=3;
    // int y=2;
    // cout<<x^y<<endl;
    // return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class CQ {
// public:
  //  CQ() { cout << "CQ New" << endl; }
  // ~CQ() { cout << "CQ Delete"  << endl; }
// };
//  
// int main() {
  // CQ t1;
  // try {
    // throw 10;
  // } catch(int i) {
    // cout << "Caught " << i << endl;
  // }
// }


#include<iostream>
using namespace std;
class Grinch:public Frosty{
  public:
  virtual void m2(){
    cout<<"Grinch m2 ";
    m1();
  }
  virtual void m3(){
    cout<<"Grinch m3 ";
    Frosty::m3();
  }
  virtual void m4(){
    cout<<"Grinch m4 ";
    m3();
  }
};
class Frosty:public Santa{
  public:
  virtual void m1(){
    cout<<"Frosty m1 ";
  }
  virtual void m3(){
    cout<<"Frosty m3 ";
  }
};
class Santa{
  public:
  virtual void m1(){
    m3();
    cout<<"Santa m1 ";
  }
  virtual void m3(){
    cout<<"Santa m3 ";
  }
};
class Rudolph:public Santa{
  public:
  virtual void m2(){
    cout<<"Rudolph m2 ";
    m1();
  }
  virtual void m3(){
    cout<<"Rudolph m3 ";
    Santa::m3();
  }
};
//  Santa*  var1 = new Frosty();
//  Frosty* var2 = new Grinch();
//  Santa*  var3 = new Grinch();
//  Santa*  var4 = new Rudolph();
//  var1->m1();
int main(){
  Santa*  var1 = new Frosty();
  Frosty* var2 = new Grinch();
  Santa*  var3 = new Grinch();
  Santa*  var4 = new Rudolph();
  var1->m1();
  return 0;
}