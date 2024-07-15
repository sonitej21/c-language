#include <stdio.h>

int main() {
    int row,col,space, c = 1;

    for(row = 1; row <= 5; row++)
    {   
        for(space = 4; space >= row; space--)
        {
            printf("  ");
        }
        for(col = 1; col <= row; col++)
        {
            printf(" %d", col);
        }

        for(col = row - 1; col >= 1; col--)
        {
            printf(" %d", col);
        }
        printf("\n");
    }
}