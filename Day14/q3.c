#include <stdio.h>

int main(){
    
    int a, i;

    printf("enter the value a :");
    scanf("%d",&a);

     for(i = 1; i <= 10; i++)
    {
        printf("%d*%d = %d", a, i, a*i);
    }
}