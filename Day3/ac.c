#include<stdio.h>
#define pie 3.14
int main()
{
    int Area,r;

    printf("Enter the value of r ::");
    scanf("%d",&r);

    Area=pie*r*r;

    printf("Area of circle is :: %d",Area);

    return 0;
}