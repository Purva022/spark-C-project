#include<stdio.h>
void swap(int *a,int *b);
main()
{
	int a,b;
	printf("enter a and b=");
	scanf("%d%d",&a,&b);
	printf("\n before swapping a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\n after swapping a=%d and b=%d",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	    temp=*a;
	*a=*b
	*b=temp;
	
}
	
	

