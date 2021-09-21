#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	i=0;
	while(i<=num)
	{
		printf("%d,",i);
		i++;
	}
}
