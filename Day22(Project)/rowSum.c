#include<stdio.h>

int main(){
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size][size], trans[size][size];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("enter value for[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int row, col, Rowsum = 0, Colsum = 0;
    printf("Enter the row number: ");
    scanf("%d", &row);
    
    printf("Elements of row: ");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == row){
                printf("%d ", arr[i][j]);
                Rowsum = Rowsum + arr[i][j];
            }
        }
    }

    printf("\nThe sum of row: %d \n", Rowsum);

    printf("Enter the col number: ");
    scanf("%d", &col);

    printf("Elements of row: ");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j == col){
                printf("%d ", arr[i][j]);
                Colsum = Colsum + arr[i][j];
            }
        }
    }

    printf("\nThe sum of row: %d", Colsum);

    return 0;
}