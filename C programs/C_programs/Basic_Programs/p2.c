#include<stdio.h>
#include<string.h>
int main(){
    int a,b;
    char x[50];
    printf("Enter your Name : ");
    scanf("%s",&x);

    printf("Enter Your class : ");
    scanf("%d",&a);

    printf("Enter your roll no. : ");
    scanf("%d",&b);

    printf("You have entered your detail :--\n");
    printf("Name : %s\n",x);
    printf("Class : %d\n",a);
    printf("Roll no. : %d\n",b);
    return 0;
}