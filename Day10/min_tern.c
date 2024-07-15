#include<stdio.h>

int main(){
    int num1, num2, num3;

    printf("Enter value of num1: ");
    scanf("%d", &num1);
    printf("Enter value of num2: ");
    scanf("%d", &num2);
    printf("Enter value of num3: ");
    scanf("%d", &num3);

    (num1 < num2)?
        (num1 < num3) ? printf("Num 1 is MIN") : printf("Num 3 is MIN")
        :
        (num2 < num3) ? printf("Num 2 is MIN") : printf("Num 3 is MIN");

    return 0;
}