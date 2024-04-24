#include<iostream>
using namespace std;
 class Student{   
    int regdno;
    float marks[6],total,avg;
public:;
void readMarks();
void findTotalAndAvgMarks();
void displayMarks();
}

void Student::readMarks(){
    cout<<"Enter student regdno : ";
    cin>>regdno;
    cout<<"Enter 6 subjects marks : ";
    for(int i=0;i<6;i++){
        cin>>marks[i];

    }
}
void Student::findTotalAndAvgMarks(){
    float smule=0;
    for(int i=0;i<6;i++){
        smule+=marks[i];
    }
    total=smule;
    avg=total/6;
}
void Student::displayMarks(){
    cout<<"Student Regdno : "<<regdno<<endl;
    cout<<"Total marks : "<<total<<endl;
    cout<<"Avg marks : "<<avg;
};
// #include"oop.01.cpp"
int main(){
    Student s;
    s.readMarks();
    s.findTotalAndAvgMarks();
    s.displayMarks();

}