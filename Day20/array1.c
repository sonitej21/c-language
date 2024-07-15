#include <stdio.h>
int main(){
    int size;
    printf("enter the size of array ::");
    scanf("%d",&size);
    int b[size];
    for(int i=0 ; i<size ; i++)
    {
        printf("enter the value::");
        scanf("%d",&b[i]);
    }
    printf("lenghth of array %d",size);
}