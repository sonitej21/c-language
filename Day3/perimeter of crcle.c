#include<stdio.h>
#define pie 3.14
int main()
{
	int r,area;
	
	printf("Enter the radius :: ");
	scanf("%d",&r);
	
	area= 2*pie*r;
	
	printf("The area of circle is :: %d",area);
}