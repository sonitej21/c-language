#include<stdio.h>

int main(){
    int user;

    printf("Enter any number: ");
    scanf("%d", &user);

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", user, i, user*i);
    }

    return 0;
}