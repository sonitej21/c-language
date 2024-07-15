#include<stdio.h>

int main(){
    char str[100];
    char newStr[100];
    int count = 0; 
    int j = 0;

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != 0; i++){
        count++;
    }

    printf("%d\n", count);

    for(int i = count; i >= 0; i--){
        printf("%c", str[i]);
        newStr[j] = str[i];  
        // printf("%c",newStr[j]);
        j++;
    }

    printf("\n");

    for(int i = 0; i <= 7; i++){
        // printf("%c", newStr[i]);
        printf("%c", str[i]);

        if(str[i] == newStr[i]){
            printf("matched");
        }
    }

    return 0;
}