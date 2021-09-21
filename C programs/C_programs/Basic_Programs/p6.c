#include<stdio.h>
int main()
{
	char c,lc,uc;
	printf("Enter any Character :");
	scanf("%c",&c);
	
	uc = ('a','e','i','o','u');
	lc = ('A','E','I','O','U');
	
	if (c==uc||c==lc)
	printf("%c is Vowel",c);
	
	else
	printf("%c is consonant",c);
	
	return 0;
}
	
	
