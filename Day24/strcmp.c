#include<stdio.h>
#include<string.h>

int main(){
    char str1[50], str2[50];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int val = strcmp(str1, str2);

    printf("%d", val);

    return 0;
}