#include <stdio.h>
int sum(int n,int box[n])
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + box[i];
    }
    printf("The sum of an Array: %d", sum);
}

int main() {
    int n;

    printf("Enter string: ");
    scanf("%d", &n);

    int box[n];

    for(int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &box[i]);
    }

    sum(n, box);
}