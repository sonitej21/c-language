#include <stdio.h>
int main(){
    int size;
    printf("enter the size of array ::");
    scanf("%d",&size);
    int a[size], b[size], c[size];
    printf("enter array elements of a ::");
    for(int i=0 ; i<size ; i++)
    {
        printf("enter the value %d:",i+1);
        scanf("%d",&a[i]);
    }

    printf("enter array elements of b ::");
    for(int i=0 ; i<size ; i++)
    {
        printf("enter the value %d:",i+1);
        scanf("%d",&b[i]);
    }

    printf("array c is::");
    for ( int  i = 0; i < size; i++)
    {
        c[i]=a[i]+b[i];
        printf("%d",c[i]);
    }
}