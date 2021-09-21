#include<stdio.h>

int main(){
	int i,n,sum=0;
	printf("Enter any no.");
	scanf("%d",&n);

	for(i=0;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("%d ,",sum);


	return 0;
}
