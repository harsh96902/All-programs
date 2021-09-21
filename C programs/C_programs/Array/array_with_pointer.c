#include<stdio.h>

int main(){
    int marks[5];
    int *ptr;
    ptr = &marks[0];
    for(int i=0;i<5;i++){
    printf("Enter the marks for student %d is : ",i+1);
    scanf("%d",ptr);
    ptr++;
    }
    for(int i=0;i<5;i++){
    printf("You have entered marks for student %d is : %d\n ",i+1,marks[i]);
    }
    return 0;
}