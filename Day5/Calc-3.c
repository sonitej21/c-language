#include<stdio.h>

int main(){
    int x, y, ans;

    printf("Enter A: ");
    scanf("%d", &x);
    printf("Enter B: ");
    scanf("%d", &y);

    ans = (x + y) * (x + y) * (x + y);

    printf("Answer is: %d", ans);

    return 0;
}