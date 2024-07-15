#include <stdio.h>

int main() {
    for(int row = 1; row <=5; row++)
    {
        for(int space = 1; space < row; space++)
        {
            printf("  ");
        }
        for(int col = row; col <= 5; col++)
        {
            if(col % 2 == 1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}