#include<stdio.h>

int main(){
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr1[size][size], arr2[size][size], sum[size][size];

    printf("Matrix A: \n");
    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            printf("Enter value of arr1[%d][%d]: ", r, c);
            scanf("%d", &arr1[r][c]);
        }
    }

    printf("Matrix B: \n");
    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            printf("Enter value of arr2[%d][%d]: ", r, c);
            scanf("%d", &arr2[r][c]);
        }
    }

    printf("Matrix A + B = \n");
    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            sum[r][c] = arr1[r][c] + arr2[r][c];
        }
    }

    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            printf("%d ", sum[r][c]);
        }
        printf("\n");
    }

    return 0;
}