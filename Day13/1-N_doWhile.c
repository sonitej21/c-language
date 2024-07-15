#include<stdio.h>

int main(){
    int n = 1, user;

    printf("Enter any number: ");
    scanf("%d", &user);

    do{
        if(n%2 == 0){
            printf("%d\n", n);
        }
        n++;
    } while(n <= user);

    return 0;
}