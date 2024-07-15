#include<stdio.h>

int main(){
    int num, first, last, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    last = num%10;

    first = num;
    while (first >= 10)
    {
        first = first/10;
    }
    
    sum = first + last;

    printf("%d ", sum);

    return 0;
}