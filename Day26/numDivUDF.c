#include<stdio.h>

int numDivFun(int n1){
    if(n1%3 == 0 && n1%5 == 0){
        printf("The given number is divisible by both 3 & 5.");
    } else{
        printf("The given number is NOT divisible by both 3 & 5.");
    }
}

int main(){
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    numDivFun(num);

    return 0;
}