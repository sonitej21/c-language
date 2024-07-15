#include<stdio.h>

int main(){
    int num, sum = 0, digi;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num != 0){
        digi = num%10;
        sum = sum + digi;
        num = num/10;  
    }

    printf("Number of Digits: %d", sum);

    return 0;
}