#include<stdio.h>

int main(){
    int a ,b,arr[10][10];
    printf("Enter the no. of rows : ");
    scanf("%d",&a);
    printf("Enter the no. of columns : ");
    scanf("%d",&b);
    printf("Enter all elemnts :---\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }        
    return 0;
}