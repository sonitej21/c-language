// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

#include<stdio.h>

int main(){
    int start = 5;
    for (int row = 1; row <= 5; row++){
        for(int col = start; col >= 1; col--){
            printf("%d ", col);
        }
        printf("\n");
        start--;
    }
    
    return 0;
}