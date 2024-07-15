#include <stdio.h>

int main() {
    char str[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find string length
    for (length = 0; str[length] != '\0'; length++);

    // Compare characters from both ends
        for (i = 0; i < length / 2; i++) {
            if (str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
            }
        }

    // Print result
    if (flag) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }
}