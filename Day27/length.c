#include <stdio.h>
int length(char name[100]){
    int count = 0;
    while(name[count] != '\0')
    {   
        count++;
    }
    printf("Length is: %d", count);
}
int main() {
    char name[100];

    printf("Enter Name: ");
    gets(name);

    length(name);
}