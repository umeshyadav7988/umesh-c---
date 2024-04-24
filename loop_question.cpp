// #include <iostream>
// 
// using namespace std;
// 
// int main() {
        // for (int i = 1; i <= 5; ++i) {
        // cout << i << " ";
    // }
    // return 0;
// }

// C++ Program to display a text 5 times

// #include <iostream>
// using namespace std;
// 
// int main() {
    // for (int i = 1; i <= 10; ++i) {
        // cout <<  " umesh yadav " << endl;
    // }
    // return 0;
// }





// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

// #include <iostream>
// using namespace std;
// int main() {
    // int num,sum;
    // sum=0;
    // cout<<"enter positive number:";
    // cin>>num;
    // for(int i=1;i<=num;i++){
        // sum+=i;
    // }
    // cout<<" sum of number= "<<sum<<endl;

    // return 0;
// }



#include <iostream>

using namespace std;

int main() {
    int num_array[]={1,2,3,4,5,6,7,8,9,10};
    for(int n :num_array){
        cout<<n<<" ";
    }
    return 0;
}