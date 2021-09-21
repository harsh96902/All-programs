#include<stdio.h>
int main()
{
	int n,i,d,c,sum=0;
	printf("Enter any num :");
	scanf("%d",&n);
	
	for(i=n;i>0;i=i/10)
	{
		d = i%10;
		c = d*d*d;
		sum=sum+c;
	}
	printf("%d",sum);
	if(sum==n)
	{
		printf("\n%d is an Armstrong number",n);
	}
	else
	printf("\n%d is not an Armstrong number",n);
}
