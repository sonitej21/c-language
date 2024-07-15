#include <stdio.h>
int main(){
    char box[100];
    printf("enter any string value::");
    gets(box);
    for (int i = 0; i < box[i] ; i++)
    {
        if (box[i]>='a' && box[i]<='z')
        {
            box[i]-=32;
        }
        printf("%c",box[i]);
    }
}