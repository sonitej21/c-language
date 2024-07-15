#include<stdio.h>

int main(){
    int first = 1, second = -1, temp, user;

    printf("Enter any number: ");
    scanf("%d", &user);

    for(int i=1; i<=user; i++){
        temp = first + second;
        printf("%d ", temp);
        second = first;
        first = temp;
    }

    return 0;
}