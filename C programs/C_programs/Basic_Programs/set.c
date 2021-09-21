#include<stdio.h>

int main(){
    int a,b,i,j,n1[50],n2[50];
    printf("Enter the no. of elements in set 1 : ");
    scanf("%d",&a);

    printf("Enter the no. of element in set 2 : ");
    scanf("%d",&b);

    printf("Enter the elements of set 1 :");     
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n1[i]);
    }
    printf("Enter the elements of set 2 :");
    for(j=1;j<=b;j++)
    {
        scanf("%d",&n2[j]);
    }
    printf("Cartesian product : ");
    for(i=1;i<=a;i++)  
    {
    for(j=1;j<=b;j++)
    {    
    printf("(%d,%d)",n1[i],n2[j]);
    printf(",");
    }
    }

    return 0;
}