#include<stdio.h>

int main(){
    int choice;

    printf("Press 1 for English.\n");
    printf("Press 2 for Hindi.\n");
    printf("Press 3 for Gujarati.\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Press 1 for Internet Recharge.\n");
        printf("Press 2 for Top-Up Recharge.\n");
        printf("Press 3 for Special Recharge.\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("You have successfully done a Internet Recharge.");
            break;
        case 2:
            printf("You have successfully done a Top-up Recharge.");
            break;
        case 3:
            printf("You have successfully done a Special Recharge.");
            break;
        
        default:
            printf("Invalid Choice.");
            break;
        }
        break;

    case 2:
        printf("Internet Recharge ke liye 1 dabaye.\n");
        printf("Top-up Recharge ke liye 2 dabaye.\n");
        printf("Special Recharge ke liye 3 dabaye.\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Aaapka Internet recharge successfully ho chuka hai.");
            break;
        case 2:
            printf("Aaapka Top-up recharge successfully ho chuka hai.");
            break;
        case 3:
            printf("Aaapka Special recharge successfully ho chuka hai.");
            break;
        
        default:
            printf("Invalid Choice.");
            break;
        }
        break;

    case 3:
        printf("Internet Recharge maate 1 dabaavo.\n");
        printf("Top-up Recharge maate 2 dabaavo.\n");
        printf("Special Recharge maate 3 dabaavo.\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Tamaaru Internet Recharge Successfully thai chukyu che.");
            break;
        case 2:
            printf("Tamaaru Top-up Recharge Successfully thai chukyu che.");
            break;
        case 3:
            printf("Tamaaru Special Recharge Successfully thai chukyu che.");
            break;
        
        default:
            printf("Invalid Choice.");
            break;
        }
        break;
    
    default:
        printf("Invalid Choice.");
        break;
    }



    return 0;
}