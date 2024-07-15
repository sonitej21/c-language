#include<stdio.h>

int main(){

    int a;
    
    printf("enter value a::");
    scanf("%d",&a);

    while(a >= 1)
    {
        if (a%2==1)
        {
            printf("%d",a);
        }
        a--;
    } 
}