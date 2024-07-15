#include <stdio.h>

int main() {
    for(int row = 5; row >= 1; row--)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        for(int space = 5; space > row; space--)
        {
            printf("    ");
        }
        for(int col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}