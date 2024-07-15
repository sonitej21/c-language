#include<stdio.h>

int main(){
    int num1, num2, num3, num4;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1 > num2 && num1 > num3 && num1 > num4){
        printf("Numbre %d is the maximum.", num1);
    } else if(num2 > num1 && num2 > num3 && num2 > num4){
        printf("Numbre %d is the maximum.", num2);
    } else if(num3 > num1 && num3 > num2 && num3 > num4){
        printf("Numbre %d is the maximum.", num3);
    } else if(num4 > num1 && num4 > num3 && num4 > num2){
        printf("Numbre %d is the maximum.", num4);
    }

    return 0;
}