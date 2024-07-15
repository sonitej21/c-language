#include<stdio.h>

int main(){
    float i1, i2, w1, w2, avg;

    printf("Enter the item1 and it's weight: ");
    scanf("%f %f", &w1, &i1);

    printf("Enter the item2 and it's weight: ");
    scanf("%f %f", &w2, &i2);

    avg = ((i1 * w1) + (i2 * w2))/(i1 + i2);

    printf("Average value: %f", avg);

    return 0;
}