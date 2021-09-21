#include<stdio.h>
#include<string.h>
int main(){
  char a[50],b[50];
  int i;
  printf("Enter your first name : ");
  scanf("%s",&a);
  printf("Enter your last name : ");
  scanf("%s",&b);
  printf("You have entered your name is : %s %s",a,b);    
  printf("\nSuccessfully saved");                                  
  return 0;
}