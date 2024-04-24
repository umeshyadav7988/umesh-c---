#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"your age is:"
    cin>>age;
    if(age>18)
    {
        cout<<"you are kid";
    }
    else if(age==18){
        cout<<"you are young man"endl;
    }
    else{
        cout<<"you are eligible for vote"
    }
    return 0;

}