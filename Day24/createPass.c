#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>

int main(){
    char pass[100];
    bool hasUpper = false;
    bool hasAlpha = false;
    bool hasSpec = false;
    bool hasDigit = false;
    bool hasLength = false;

    printf("Enter the password: ");
    gets(pass);

    for (int i = 0; pass[i] != 0; i++)
    {
        if(isupper(pass[i])){
            hasUpper = true;
            // printf("Has upperchar\n");
        }
        if(isalpha(pass[i])){
            hasAlpha = true;
            // printf("Has letters\n");
        }
        if(ispunct(pass[i])){
            hasSpec = true;
            // printf("has special symbol\n");
        }
        if(isdigit(pass[i])){
            hasDigit= true;
            // printf("has numbers\n");
        }
    }

    if(strlen(pass) >= 6){
        hasLength = true;
        // printf("has min length");
    }

    if(hasUpper && hasAlpha && hasSpec && hasDigit && hasLength){
        printf("VALID PASSWORD");
    } else{
        printf("INVALID PASSWORD");
    }

    return 0;
}