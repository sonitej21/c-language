#include<stdio.h>
#define rate 12
int main()
{
	int p,n ,i;
	
	printf("Enter the principle amount :: ");
	scanf("%d",&p);
	
	printf("Enter the value of n ::");
	scanf("%d",&n);
	
	i= p*rate*n/100;
	
	printf("The interset is :: %d",i);
	
	
}