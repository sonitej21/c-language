#include <stdio.h>

int add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("Sum is %d", sum);
}
int main() {
    
    add(5, 4);
}