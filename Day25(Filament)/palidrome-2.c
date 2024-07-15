#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char newStr[100];
    int count = 0;
    int j = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        newStr[j] = str[i];
        j++;
    }
    newStr[j] = '\0'; 

    for (int i = 0; i < count; i++) {
        if (str[i] != newStr[i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
