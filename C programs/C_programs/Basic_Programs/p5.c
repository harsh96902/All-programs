#include<stdio.h>
int main()
{
	int a,b,q,r;
	printf("Enter any two number:");
	scanf("%d%d",&a,&b);
	
	q = a / b;
	printf("Quotient :%d\n",q);
	
	r = a%b;
	printf("Reminder :%d",r);
	return 0;
		
}
