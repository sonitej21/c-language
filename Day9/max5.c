#include<stdio.h>

int main(){
    int num1, num2, num3, num4, num5;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    printf("Enter number 4: ");
    scanf("%d", &num4);
    printf("Enter number 5: ");
    scanf("%d", &num5);

    if(num1 > num2){
        if(num1 > num3){
            if(num1 > num4){
                if(num1 > num5){
                    printf("Num1: %d is the maximum number.", num1);
                } else{
                    printf("Num5: %d is the maximum number.", num5);
                }
            } else{
                if(num4 > num5){
                    printf("Num4: %d is the maximum number.", num4);
                } else{
                    printf("Num5: %d is the maximum number.", num5);
                }
            }
        } else{
            if(num3 > num4){
                if(num3 > num5){
                    printf("Num3: %d is the maximum number.", num3);
                } else{
                    printf("Num5: %d is the maximum number.", num5);
                }
            } else{
                if(num4 > num5){
                    printf("Num4: %d is the maximum number.", num4);
                } else{
                    printf("Num5: %d is the maximum number.", num5);
                }
            }
        }
    } else{
        if(num2 > num3){
            if(num2 > num4){
                if(num2 > num5){
                    printf("Num2: %d is the maximum number.", num2);
                } else{
                    printf("Num5: %d is the maximum number.", num5);
                }
            } else{
                if(num4 > num5){
                    printf("Num4: %d is the maximum number.", num4);
                } else{
                    printf("Num5: %d is the maximum number.", num5);
                }
            }
        } else{
            if(num3 > num4){
                if(num3 > num5){
                    printf("Num3: %d is the maximum number.", num3);
                } else{
                    printf("Num5: %d is the maximum number.", num5);
                }
            } else{
                if(num4 > num5){
                    printf("Num4: %d is the maximum number.", num4);
                } else{
                    printf("Num5: %d is the maximum number.", num5);
                }
            }
        }
    }
    return 0;
}