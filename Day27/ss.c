#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int main() {

    int sum = add(5, 3);
    printf("Sum is: %d", sum);
}