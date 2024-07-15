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
        if(pass[i] >= 33 && pass[i] <= 47 || pass[i] >= 58 && pass[i] <= 64){
            hasSpec = true;
            // printf("Has speical character\n");
        }
        if(pass[i] >= 65 && pass[i] <= 90){
            hasUpper = true;
            // printf("Has uppercase\n");
        }
        if(pass[i] >= 48 && pass[i] <= 57){
            hasDigit = true;
            // printf("Has numbers\n");
        }
        if(pass[i] >= 65 && pass[i] <= 90 || pass[i] >= 97 && pass[i] <= 122){
            hasAlpha = true;
            // printf("Has characters\n");
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