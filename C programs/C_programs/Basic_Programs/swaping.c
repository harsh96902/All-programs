#include<stdio.h>
int main()
{
	int a,b;
	// int temp;
	printf("Enter the First number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	// temp=a;
	// a=b;
	// b=temp;
	// wihtout using third variable------
	a = a+b;
    b = a-b;
    a = a-b;
	printf("After swapping a is %d and b is %d",a,b);
	
}
