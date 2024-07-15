#include<stdio.h>

int main(){
    int row, col;
    float sum = 0, avg;

    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the col size: ");
    scanf("%d", &col);

    int box[row][col];

    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            printf("Enter value of box[%d][%d]: ", r, c);
            scanf("%d", &box[r][c]);
        }
    }

    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            printf("%d ", box[r][c]);
        }
        printf("\n");
    }

    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            sum = sum + box[r][c];
        }
    }

    avg = sum / (row * col);

    printf("Sum is: %.2f \n", sum);
    printf("Average is: %.2f", avg);

    return 0;
}