#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter any number:");
	scanf(" %d",&num);
	
	for(i=1;i<=10;i++)
	{
		//mul=num*i;
		printf("%d * %d = %d \n",num,i,num*i);
	}
}
