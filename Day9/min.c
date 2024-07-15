#include<stdio.h>

int main(){
    int num1, num2, num3;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            printf("%d is the minimum numebr.", num1);
        }
    } else if (num2 < num1)
    {
        if (num2 < num3)
        {
            printf("%d is the minimum number.", num2);
        }
    } else if (num3 < num1)
    {
        if (num3 < num2)
        {
            printf("%d is the minimum number", num3);
        }
        
    }
    

    

    return 0;
}