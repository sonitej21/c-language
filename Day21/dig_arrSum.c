#include<stdio.h>

int main(){
    int size, sum = 0;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr1[size][size];

    printf("Array: \n");
    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            printf("Enter value of arr1[%d][%d]: ", r, c);
            scanf("%d", &arr1[r][c]);
        }
    }

    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            if(r == c){
                sum = sum + arr1[r][c];
            }
        }
    }

    printf("Diagonal sum is: %d", sum);

    return 0;
}