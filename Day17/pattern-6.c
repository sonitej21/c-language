#include<stdio.h>

int main(){
    for(int row = 5; row >= 1; row--){
        for(int col = 5; col >= row; col--){
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}