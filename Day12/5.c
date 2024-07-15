
#include<stdio.h>

int main(){

    int a,b;

    printf("enter value a::");
    scanf("%d",&a);

    printf("enter value b::");
    scanf("%d",&b);

    while(a <= b)
    {
        if (a%4==0)
        {
            printf("%d",a);
        }
        a++;
    } 
}