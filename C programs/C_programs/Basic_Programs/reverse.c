#include<stdio.h>
int main()
{
	int n,i,reverse=0,r;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	for(i=n;i!=0;i=i/10)
	{
		r = i%10;
	    reverse = reverse * 10 + r;
    }
	printf("%d",reverse);
	return 0;
}
