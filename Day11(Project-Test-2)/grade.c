#include<stdio.h>

int main(){
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    char grade;

    (marks >= 90 && marks <= 100)?printf("Grade A\n"), grade = 'A':
    (marks >= 80 && marks <= 89)?printf("Grade B\n"), grade = 'B':
    (marks >= 70 && marks <= 79)?printf("Grade C\n"), grade = 'C':
    (marks >= 60 && marks <= 69)?printf("Grade D\n"), grade = 'D':
    (marks >= 50 && marks <= 59)?printf("Grade E\n"), grade = 'E':
    (marks >= 0 && marks <= 49)?printf("Grade F\n"), grade = 'F':
    printf("Enter marks in correct range.");

    switch (grade)
    {
    case 'A':
        printf("Excellent work!\n");
        break;
    case 'B':
        printf("Well done.\n");
        break;
    case 'C':
        printf("Good job.\n");
        break;
    case 'D':
        printf("You passed, but you could do better.\n");
        break;
    case 'E':
        printf("Your passed.\n");
        break;
    case 'F':
        printf("Sorry, you failed.\n");
        break;
    default:
        printf("Some error occured!");
        break;
    }

    if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E'){
        printf("Congratulations! You are eligible for the next level");
    } else{
        printf("Please try again next time.");
    }

    return 0;
}