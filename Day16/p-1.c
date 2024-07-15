// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 


#include<stdio.h>

int main(){
    for (int row = 1; row < 5; row++){
        for(int col = 1; col <= 5; col++){
            printf("%d ", col);
        }
        printf("\n");
    }
    

    return 0;
}