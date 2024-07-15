#include<stdio.h>
#include<string.h>

int main(){
    char email[] = "priyank@gmail.com";
    char pass[] = "pr@12345";
    char userEmail[100], userPass[100];

    printf("Enter emailId: ");
    gets(userEmail);
    printf("Enter pass: ");
    gets(userPass);

    if(strcmp(email, userEmail) == 0 && strcmp(pass, userPass) == 0){
        printf("Valid Username and Password");
    } else{
        printf("Invalid Username or Password");
    }

    return 0;
}