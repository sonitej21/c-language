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

    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            trans[i][j] = arr[j][i];
        }
    }

    printf("Original: \n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transposed: \n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}