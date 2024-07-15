#include<stdio.h>

int main(){
    int size, max = 0;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size][size];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("Enter the value for[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Negative elements from an Array: ");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i][j] > max){
               max = arr[i][j];
            }
        }
    }

    printf("Maximum is: %d", max);

    return 0;
}