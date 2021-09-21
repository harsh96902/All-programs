#include<stdio.h>

int main(){
    int i,marks[5];
    for (i=0;i<5;i++)
    {
        printf("Enter the  marks for student%d:\n",i+1);
        // remember that the value strt from 0 so we have to add 1
        scanf("%d",&marks[i]);
    }
     for (i=0;i<5;i++)
    {
        printf("The value of marks for student %d is %d\n",i+1,marks[i]);
    }
    
    return 0;
}