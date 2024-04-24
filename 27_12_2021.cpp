// #include<iostream>
// using namespace std;
// 
// int main(){
    // char a[100],b[100];
    // cin>>a;
    // cin>>b;
    // int i=0,j=0;
    // while(a[i]!='\0')
    // i++;
    // cout<<i<<endl;
    // while (a[j]!='\0')
    // {
        // a[i]=b[j];
        // i++;
        // j++;
    // }
    // a[i]='\0';
    // cout<<a<<endl;
    // return 0;
// }


// #include<iostream>
// using namespace std;
// 
// int main(){
    // char a[100],b[100];
    // cin>>a;
    // cin>>b;
    // int i=0,j=0;
    // while(a[i]!='\0')
    // i++;
    // a[i]=' ';
    // i++;
    // while (a[j]!='\0')
//  {
//   a[i]=b[j];
//   i++;
//   j++;
//  }
//  a[i]='\0';
//  cout<<a<<endl;
//  return 0;
// }


// #include<iostream>
// using namespace std;
// 
// int main(){
    // char a[100];
    // cin.getline(a,100);
    // int i=0,v=0,c=0;
    // while(a[i]!='\0')
    // {
        // if(a[i]>='a' && a[i]<='z')
        // {
            // if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            // v++;
            // else
            // c++;
        // }
        // i++;
    // }
    // cout<<"vowel alphabet="<<v<<endl;
    // cout<<"other alphabet="<<c<<endl;
    // return 0;
// }

// #include<iostream>
// using namespace std;
// 
// int main(){
    // char a[]="CODE";
    // int i=0,j=0;
    // while(a[i]!='\0')
    // i++;
    // char temp;
    // i--;
    // while(j<i){
        // temp=a[j];
        // a[j]=a[i];
        // a[i]=temp;
        // j++;
        // i--;
    // }
    // cout<<a<<endl;
    // return 0;
// }


// #include<iostream>
// #include<cstring>
// using namespace std;
// 
// int main(){
    // char name1[10]="Guru99";
    // char name2[10]="john";
    // char name3[10];
// 
    // int len;
    // strcpy(name3, name2);
    // cout<<"string(name3, name1 ):"<<name3<<endl;
// 
    // strcat(name1,name2);
    // cout<<"strcat(name1,name2):"<<name1<<endl;
// 
    // len=strlen(name1);
    // cout<<len<<endl;
// 
    // return 0;
// }

#include<iostream>
using namespace std;

int main(){
    char firststr a[50]="this is software testinghelp.com";
    char secstr[50]="a testing platform";

    int len=strlen(firststr);
    cout<<"Length of firststr:"<<len;
    strcpy(stcstr,"softwaretesting");
    cout<<"\nResultant string (secstr):"<<secstr;
    cout<<"\ncomparing firststr and secstr:"<<strcmp(firststr,secstr);
    strcat(secstr,"for You");
    cout<<"\nconcanated secstr:"<<secstr;
    
    return 0;
}