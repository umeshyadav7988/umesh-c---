#include <stdio.h>

int main()
{
    int a, b,temp;
    printf("Enter the value of a and b %d");
    scanf("%d %d",&a,&b);
    temp=a;
    a = b;
    b = temp;
    printf("after swapping val %d %d",a,b );
    return 0;
    
}