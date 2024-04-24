// #include<stdio.h>  
//  int main()    
// {    
// int n, rev=0, r;    
// printf("Enter a number: ");    
//   scanf("%d", &n);    
//   while(n>0)    
//   {    
//     r=n%10;    
//     rev=rev*10+r;    
//     n=n/10;    
//   }    
//   printf("Reversed Number: %d",rev);    
// return 0;  
// }   

#include<stdio.h>

int main(){
  int a,b=0,c;
  scanf("%d",&a);
  while(a!=0){
    b=b*10+1;
    c=a+b;
  }
  printf("%d",c);
}