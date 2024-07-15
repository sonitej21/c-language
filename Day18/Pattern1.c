#include <stdio.h>

int main() {
for(int row = 1; row <= 5; row++) // 1, 2, 3, 4, 5.
{
    for(int space = 4; space >= row; space--) // 4 space, 3 space, 2 space, 1 space.
    {
        printf("- ");
    }
    for(int col = 1; col <= row; col++) // 1, 1-2, 1-2-3, 1-2-3-4, 1-2-3-4-5.
    {
        printf("%d ", col);
    }
    printf("\n");
}
}