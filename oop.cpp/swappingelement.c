#include<stdio.h>

int main(){
    int a,b;
    printf("Enter val of a and b ");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping val %d %d ",a,b);
}

