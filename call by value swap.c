#include <stdio.h>


void swap(int a, int b)
{
     int t;
    
    t=a;
    a=b;
    b=t;
    
    printf("Updated value of a = %d \n Updated value of b = %d",a,b);
}


int main()
{
    int a=10;
    int b=20;
    printf("Original value of a = %d \n Original value of b = %d \n \n",a,b);
    
    swap(a,b);
    
    return 0;
}
