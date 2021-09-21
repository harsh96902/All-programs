#include<stdio.h>

int main(){
    int arr[10];
    int num,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Enter any %d elements : \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered elements are : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the elements which you want to search : ");
    scanf("%d",&num);

    for(int i=0;i<n-1;i++){     // Remember that  
        for(int j=0;j<n-1;j++){ // here n-1 is because there will be no any value 
            if(arr[j]>arr[j+1]){   // after last number for comparison
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   

        }
    }
    if(arr[n/2]<num){
        for(int i=n/2;i<n;i++){
            if(arr[i] == num){
                printf("Searching successful\n");
                printf("Position of the elements is : %d",i+1);
            }
        }
    }
    else if(arr[n/2]>=num){
        for(int i=n/2;i>=0;i--){
            if(arr[i] == num){
                printf("Searching successful\n");
                printf("Position of the elements is : %d",i+1);
            }
        }
    }
    // else{
        // printf("Searching successful\n");
        // printf("Position of the elements is : %d",n/2+1);
    // }          
    return 0;
}
