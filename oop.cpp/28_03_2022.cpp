// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={10,20,3};
//     for(int i=0;i<3;i++){
//         arr[i]=arr[i]++;
//         cout<<sizeof(arr)<<endl;
//         for(int i=0;i<3;i++){
//             cout<<arr[i]<<" ";
//             cout<<endl;
//         }
//     }
//         return 0;
// }

// #include<iostream>
// using namespace std;
// 
// int main(){
    // int a[]={10,20,3};
    // for(int i=0;i<3;i++)
    // cout<<a[i]<<endl;
    // cout<<sizeof(a)<<endl;
    // return 0;
// }


// #include<iostream>
// using namespace std;
// 
// int main(){
    // int a[5];
    // cin>>a[0];
    // cout<<a[0];
    // return 0;
// }

// #include<iostream>
// using namespace std;
// 
// int main(){
    // int a[5];
    // cin>>a[0];
    // for(int i:a){
        // cout<<i;
    // }
    // return 0;
// }

// #include<iostream>
// using namespace std;
// void f(int *);
// int main(){
    // int a[5];
    // cout<<sizeof(a)<<endl;
    // f(a);
    // return 0;
// }
// void f(int *a){
    // cout<<sizeof(a)<<endl;
    // }

    // #include<iostream>
    // using namespace std;
    // void f(char *);
    // int main(){
        // char a[]="DSC++";
        // cout<<sizeof(a)<<endl;
        // for(int i=0;i<sizeof(a)/sizeof(char);i++){
            // cout<<a[i]<<" ";
            // cout<<endl;
        // }
    // }
        // void f(char *a){
            // for(int i=0;i<sizeof(a)/sizeof(char);i++){
                // cout<<a[i]<<" ";
                // cout<<endl;
        // }

    // }


//  #include<iostream>
// using namespace std;
// void f(int *);
// int main(){
    //  int a[]={10,20,30,40,50,60,70,80,90,100};
    // cout<<sizeof(a)<<endl;
    // for(int i=0;i<sizeof(a)/sizeof(int);i++){
        // cout<<a[i]<<" ";
        // cout<<endl;
    // }
// }
    // void f(int *a){
        // for(int i=0;i<sizeof(a)/sizeof(int);i++){
            // cout<<a[i]<<" ";
            // cout<<endl;
    // }
// }


#include<iostream>
using namespace std;
void display(float *,int);
void accept(float *,int);
int main(){
    float a[5];
    int l=sizeof(a)/sizeof(float);
    cout<<sizeof(float)<<endl;
    accept(a,l);
    display(a,l);
    return 0;
}