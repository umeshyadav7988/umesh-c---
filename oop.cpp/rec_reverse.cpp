// #include <iostream>
// using namespace std;
// void rec(int *arr, int n, int i)
// {
//     if (i == n / 2)
//     {
//         return;
//     }
//     int temp = arr[i];
//     arr[i] = arr[n - i - 1];
//     arr[n - i - 1] = temp;
//     rec(arr, n, i + 1);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     rec(arr, n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
class abc{
    public:
    static int x;
    int i;
    abc(){
        i=++x;
    }
};
int abc::x;
int main(){
    abc m,n,p;
    cout<<m.x<<" "<<m.i<<endl;
    return 0;
}
// constructur cannot be virtual.
// cannot be overloaded ?

