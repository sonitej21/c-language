#include <stdio.h>

int main(){
    
    int a, i, sum=1 ;

    printf("enter the value a :");
    scanf("%d",&a);

     for(i = 1; i <= a; i++)
    {
        sum = sum * i;
    }
    printf("%d",sum);
}