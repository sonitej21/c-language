#include<stdio.h>

int main(){
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter the value for[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements from an Array: ");
    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}