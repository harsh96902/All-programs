#include<stdio.h>

int main(){
    int arr1[100];
    int arr2[100];
    int num,n;
    printf("Enter the no. of elements you want to enter in set 1 :");
    scanf("%d",&num);
    printf("Enter the elements of set 1 :- ");
    for(int i = 0;i<num;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the no. of elements you want to enter in set 2 :");
    scanf("%d",&n);
    printf("Enter the elements of set 2 :- ");
    for(int j = 0;j<n;j++){
        scanf("%d",&arr2[j]);
    }
    for(int i = 0;i<num;i++){
        for(int j = 0;j<n;j++){
            printf("(%d,%d)",arr1[i],arr2[j]);
            printf(",");
        }
    }
    return 0;
}