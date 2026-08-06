#include <stdio.h>
int main()
{
    int a=10;
    int b=20;
    int t;
    
    printf("Original value of a = %d \n Original value of b = %d \n \n",a,b);
    t=a;
    a=b;
    b=t;
    
    printf("Updated value of a = %d \n Updated value of b = %d",a,b);
    
    return 0;
}
