#include<stdio.h>

int main(){
    int start, end;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    for(int j=start; j<=end; j++){
        for(int i=1; i<=10; i++){
            printf("%d * %d = %d\n",j, i, j*i);
        }
        printf("\n");
    }

    return 0;
}