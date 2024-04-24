// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5]={1,2,1,1};
//     int count=0;
//     int c;
//     for(int i=0;i<4;i++){
//         for(int j=i+1;j<4;j++){
//             if(a[i]==a[j]){
//                 count++;
//                 a[i]=0;
//             }
//             a[i]=-1;
//         }
//     }
//     cout<<count<<endl;
// }
// //Traverse the string and for each word, check if it is a palindrome or not.
// //reverse array
// //duplicate
// //frequency
// //array rotate (left to right or right to left)
// //rearrange elements

// #include<iostream>
// using namespace std;
//
// int main(){
// int a;
// a=printf("%d",10);
// printf("%d",a);
//
// }

// #include<iostream>
// using namespace std;
// int fn1(){
// printf("Mukesh");
// printf("10");
// }
//
// int main(){
// int a;
// a=fn1();
// printf("%d",a);
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
//
// int main()
// {
// string str;
// cin>>str;
// int len = str.length();
// for (int i = 0; i < len / 2; i++)
// {
// int temp = str[i];
// str[i] = str[len - i - 1];
// str[len - i - 1] = temp;
// }
// cout<<"Reverse string : "<<str<<endl;
// }

// #include<iostream>
// using namespace std;
//
// int main(){
// int a,b;
// scanf("%d%d",&a,&b);
// printf("%d %d",a,b);
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
//
// int main(){
// string ch={'u','m','e','s','h'};
// int len=ch.length();
// int arr[len];
// char c;
// for(int i=0;i<len;i++){
// if(i!=' '){
// c[i++]=arr[i];
// }
// else{
//
// }
// }
// cout<<c<<endl;
// return 0;
// }
// #include<iostream>
// #include<cstring>
// using namespace std;
//
// int main(){
// char ch[100];
// gets(ch);
//
// char ch1[100];
// int j=0;
// string ch1;
// for(int i=0;i<strlen(ch);i++){
// if(ch[i]!=' '){
// ch1[j]=ch[i];
// j++;
// }
// else if(ch[i]!=' ' && ch[i+1]!=' '){
// ch1[j]=ch[i];
// j++;
// }
// else if(ch[i]==' ' && ch[i+1]==' '){
// continue;
// }
// }
// printf("%s",ch1);
// return 0;
// }

#include <iostream>
using namespace std;
int func1(int a)
{
    if (a >= 20) 
        printf("%d=", a);
    else
	{
	    func1(a * 4);
        printf("%d=", a);
	}
}

int main()
{
    // int myInt1 = 3, myInt2 = 3;
    // int *pnt1 = &myInt1, *pnt2 = &myInt2;
    // myInt1 = (*pnt1) + (*pnt1);
    // myInt2++;
    // myInt2 = (*pnt2) + (*pnt2);
    // cout << myInt1 << myInt2;

    // int myInt1 = 3, myInt2 = 3;
    // int *pnt1 = &myInt1, *pnt2 = &myInt2;
    // myInt1 = ++(*pnt1) + (*pnt1);
    // myInt2++;
    // myInt2 = (*pnt2) + (*pnt2);
    // cout << myInt1 << myInt2;

    // int myInt1 = 3, myInt2 = 3;
    // int *pnt1 = &myInt1, *pnt2 = &myInt2;
    // myInt1 = (*pnt1)++ + (*pnt1);
    // myInt2 = (*pnt2) + (*pnt2);
    // cout << myInt1 << myInt2;

    func1(10);

    return 0;


}