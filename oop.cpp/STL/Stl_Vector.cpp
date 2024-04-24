#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // starting capacity is zero

    vector<int> v(5,1);//insilize 

    vector<int> last(v);//copy v vector in last vector

    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size : " << v.capacity() << endl; // zero

    v.push_back(1);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl;

    v.push_back(2);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl;

    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl;

    v.push_back(4);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl;

    v.push_back(5);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "size : " << v.size() << endl;

    return 0;
}