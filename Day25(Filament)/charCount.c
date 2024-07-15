#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}; // Array to store the count of each character
    int i;

    printf("Enter a string: ");
    gets(str);

    // Calculate the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        // printf("%d\n",count[str[i]]);
        count[str[i]]++;
    }

    // Print the frequency of each character
    printf("Character repeated:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }

    return 0;
}
