#include<stdio.h>

int main(){
    int arr[10];
    int num;
    printf("Enter any 10 elements : \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered elements are : ");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the elements which you want to seach : ");
    scanf("%d",&num);

    for(int i=0;i<10;i++){
        if(arr[i] == num){
            printf("Searching successful\n");
            printf("Position of the elements is : %d",i+1);
        }
    }    
    return 0;
}
