// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

#include<stdio.h>

int main(){
    for(int row = 5; row >= 1; row--){
        for(int col = 1; col <= row; col++){
            if(col%2 != 0){
                printf("1 ");
            } else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

