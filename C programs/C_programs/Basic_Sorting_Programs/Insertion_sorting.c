#include<stdio.h>
// We are using here insertion sorting method :-- In this method pick every
// elements one by one and insert that at their satisfied position acc. to 
// asscending order. 
int main(){
    int arr[20],n;
    printf("Enter the no. of maximum elements : ");
    scanf("%d",&n);
    printf("Enter any %d elements : \n",n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }   
    printf("Entered elements are : ");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                for(int k=i;k>j;k--){
                    int temp=arr[k];
                    arr[k]=arr[k-1];
                    arr[k-1]=temp; 
                }
                
            }
        }                
    }
    printf("\n");    
    printf("Sorting successful in asscending order by Inserting sorting method : \n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }            
    return 0;
}