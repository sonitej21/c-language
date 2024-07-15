#include <stdio.h>
int main(){
    int size, sum=0;
    printf("enter the size of array ::");
    scanf("%d",&size);
    int b[size];
    for(int i=0 ; i<size ; i++)
    {
        printf("enter the value::");
        scanf("%d",&b[i]);
    }

    for ( int  i = 0; i < size; i++)
    {
        sum = sum + b[i];
    }
    printf("%f",(float)sum/size); 
}