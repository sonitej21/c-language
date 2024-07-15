#include<stdio.h>

int cubeFun(int n1){
    printf("Cube is: %d\n", n1*n1*n1);
}

int main(){
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    cubeFun(num);

    return 0;
}