#include<stdio.h>

int main(){
    
    int a=1,user;

    printf("enter value ::");
    scanf("%d",&user);

    while (a <= user)
    {
        printf("%d",a);
        a++;
    }
}