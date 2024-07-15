// A
// B A
// C B A
// D C B A
// E D C B A

#include<stdio.h>

int main(){
    for (char row = 'A'; row <= 'E'; row++){
        for(char col = row; col >= 'A'; col--){
            printf("%c ", col);
        }
        printf("\n");
    }
    
    return 0;
}