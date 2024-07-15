#include<stdio.h>

int main(){
    int num1, num2, num3, num4;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    printf("Enter number 4: ");
    scanf("%d", &num4);

    if(num1 > num2){
        if(num1 > num3){
            if(num1 > num4){
                printf("%d is the maximum number.", num1);
            } else{
                printf("%d is the maximum number.", num4);
            }
        } else{
            if(num3 > num4){
                printf("%d is the maximum number.", num3);
            } else{
                printf("%d is the maximum number.", num4);
            }
        }
    } else{
        if(num2 > num3){
            if(num2 > num4){
                printf("%d is the maximum number.", num2);
            } else{
                printf("%d is the maximum number.", num4);
            }
        } else{
            if(num3 > num4){
                printf("%d is the maximum number.", num3);
            } else{
                printf("%d is the maximum number.", num4);
            }
        }
    }
    return 0;
}