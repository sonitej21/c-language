#include<stdio.h>

int main(){
    int sum = 0, user;

    printf("Enter any number: ");
    scanf("%d", &user);

    for(int i=1; i<=user; i++){
        sum = sum + i;
    }

    printf("%d ", sum);

    return 0;
}