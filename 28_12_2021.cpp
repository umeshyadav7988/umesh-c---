// #include<iostream>
// using namespace std;
// class A {
    // int a;
    // public:
    // void accept(){
        // cin>>a;
        // void display(){
            // cout<<a<<endl;
        // }
    // }
// };
// int main(){
    // A obj1;
    // obj1.accept();
    // obj1.display();
// 
    // return 0;
// }
// 
// 
// a class is a template consisting data members and members function





// #include<iostream>
// using namespace std;
// class MyCircle{
//     float radius;
//     public:
//     void accept(){
//         cin>>radius;
//     } 
//     void displayArea(){
//         cout<<"Area of : "<<3.14*radius*radius<<endl;

//     }
//     void displayCir(){
//         cout<<"circle of : "<<2*3.14*radius;
//     }
// };
// int main(){
//     MyCircle x;
//     x.accept();
//     x.displayArea();
//     x.displayCir();
//     return 0;
// }

#include<iostream>
using namespace std;
class  student{
    char r[11];
    char name[100];
    char stream[100];
    float cgpa;
    public:
    void accept(){
        cin>>r;
        cin.getline(name,100);
        cin>>stream;
        cin>>cgpa;

    }
};
int main(){
    student obj;
    obj.accept();
    // obj.display();
    return 0;
}