#include<stdio.h>
main()
{
	int a=50;
	int *p;
	p=&a;
	printf("\n value of a=%d",a);
	printf("\n address of a=%u" , &a);
	
	printf("\n value of p=%d",p);
	printf("\n address of p=%u" , &p);
	
	printf("\n value of a=%d",*(&a));
	printf("\n vlaue of p=%d" , *p);
}
