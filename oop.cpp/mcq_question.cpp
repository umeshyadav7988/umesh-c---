// #include<iostream>
// using namespace std;
//
// int main(){
// int a=50;
// int *ptr=&a;
// cout<<a<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// int a=50;
// int *ptr=&a;
// cout<<(*ptr)++<<"";
// cout<<a<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// int a=7;
// int b=17;
// int *c=&b;
// a=*c;
// *c=*c+1;
// cout<<"Address of a = "<<&a<<endl;
// cout<<"Value of a = "<<a<<endl;
// cout<<"value of b = "<<b<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// float f = 10.5;
// float p = 2.5;
// float *ptr = &f;
// (*ptr)++;
// *ptr=p;
// cout<<*ptr<<endl;
// cout<<f<<endl;
// cout<<p<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// int a[5]; //4x5=20
// int *c; //8
// cout<<sizeof(a)<<endl;
// cout<<sizeof(c)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// int a[]={1,2,3,4};
// cout<<*(a)<<endl;   //1
// cout<<*(a+1);     //2
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// int a[6]={1,2,3,4,5,6};
// cout<<*(a)<<endl; //1
// cout<<*(a+4); //5
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// int a[]={1,2,3,4};
// int *p=a++;
// cout<<*p<<endl;
// return 0;
// }

// error

// #include<iostream>
// using namespace std;
//
// int main(){
// char ch='a';
// char *ptr=&ch;
// ch++;
// cout<<*ptr<<endl;
//
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// char b[]="xyz";
// char *c=&b[0];
// c++;
// cout<<c<<endl;  //y z
// return 0;
// }

// #include<iostream>
// using namespace std;
// void square(int *p)
// {
// int a = 10;
// p = &a;
// *p = (*p) * (*p);
// cout << a << endl;  //100
// }
//
// int main()
// {
// int a = 10;
// square(&a);
// cout << a << endl;  //10
// }
//

// #include <iostream>
// using namespace std;
//
// int main()
// {
// int a[6] = {1, 2, 3};
// int *b = a;
// cout << b[2];  //3
//
// return 0;
// }

// #include <iostream>
// using namespace std;
//
// int main()
// {
//
// char b[] = "xyz";
// char *c = &b[0];
// cout << c << endl;
// }

// #include <iostream>
// using namespace std;
//
// int main()
// {
// char b[] = "xyz";
// char *c = &b[0];
// c++;
// cout << c << endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
//
// int main()
// {
// char s[] = "hello";
// char *p = s;
// cout << s[0] << " " << p[0];  //h h
//
// return 0;
// }

// #include <iostream>
// using namespace std;
//
// void square(int *p)
// {
// int a = 10;
// p = &a;
// *p = (*p) * (*p);
// cout << a << endl;
// }
// int main()
// {
//  int a = 10;
//  square(&a);
//  cout << a << endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
//
// int main()
// {
// int numbers[5];
// int *p;
// p = numbers;
// *p = 10;
// p = &numbers[2];
// *p = 20;
// p--;
// *p = 30;
// p = numbers + 3;
// *p = 40;
// p = numbers;
// *(p + 4) = 50;
// for (int n = 0; n < 5; n++)
// {
// cout << numbers[n] << ",";  //10,30,20,40,50
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
//
// void Q(int z){
// z+=z;
// cout<<z<<" ";
// }
// void p(int *y){
// int x=*y+2;
// Q(x);
// *y=x-1;
// cout<<x<<" ";
// }
// int main(){
// int x=5;
// p(&x);
// cout<<x;
// return 0;
// }

// output-14,7,6

// #include<iostream>
// using namespace std;
//
// int main(){
// char s[]="ABCD";
// for(int i=0;s[i]!='\0';i++){
// cout << s[i] << *(s+i) << *(i+s) << i[s];
// }
// return 0;
// }

// output-AAAABBBBCCCCDDDD

// #include <iostream>
// using namespace std;
//
// int main()
// {
// float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
// float *ptr1 = &arr[0];
// float *ptr2 = ptr1 + 3;
// cout << *ptr2 << " "<<endl;
// cout << ptr2 - ptr1;
// return 0;
// }

// output-90.5
//    3

// #include <iostream>
// using namespace std;
//
// int main()
// {
// char arr[20];
// int i;
// for (i = 0; i < 5; i++)
// {
// *(arr + i) = 65 + i;
// }
// *(arr + i) = '\0';
// cout << arr;
// return 0;
// }
//
// output-ABCDE

// #include <iostream>
// using namespace std;
// 
// int main()
// {
    // char *ptr;
    // char Str[] = "abcdefg";
    // ptr = Str;
    // ptr += 5;
    // cout << ptr;
    // return 0;
// }
