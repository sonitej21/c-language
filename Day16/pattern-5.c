// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5 

#include<stdio.h>

int main(){
    int num = 1;

    for(int row = 1; row <= 5; row++){
        for(int col=5; col >= row; col--){
            printf("%d ", row);
        }
        printf("\n");
    }

    // for (int row = 5; row >= 1; row--)
    // {
    //     for(int col = 1; col <= row; col++){
    //         printf("%d ", num);
    //     }
    //     printf("\n");
    //     num++;
    // }

    return 0;
}