#include <stdio.h>

int add()
{
    int a = 5, b = 4;
    return a + b;
}
int main() {

    int sum = add();
    printf("Sum is %d", sum);

}