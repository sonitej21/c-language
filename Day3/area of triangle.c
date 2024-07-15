#include<stdio.h>

int main()

{
	int b,h,area,a ;
	
	printf("Enter the value of a ::");
	scanf("%d",&a);
	
	printf("Enter the value of base :: ");
	scanf("%d",&b);
	
	printf("Enter the value of height :: ");
	scanf("%d",&h);
	
	area=a*b*h;
	
	printf("The area of triangle is :: %d",area);
}