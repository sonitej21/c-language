#include <stdio.h>

int main() {
    for(int row = 1; row <= 5; row++)
    {
        if(row == 1 || row == 3)
        {
            printf("* * * * *");
        }
        else if(row == 2)
        {
            printf("*       *");
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }
}