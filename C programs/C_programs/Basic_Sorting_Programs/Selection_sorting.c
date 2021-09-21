#include<stdio.h>
// In the selection sorting method first find the minimum no.
//  and then interchange with first and then find second smallest no.
// and interchange with second and repeat this process.
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
    for(int i=0;i<n-1;i++){
        // int min = i;  // we can done it by using it
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; 
                // min = j;
            }
        // int temp=arr[i];
        // arr[i]=arr[min];
        // arr[min]=temp;    
        }
    }
    printf("\n");    
    printf("Sorting successful by selection sorting method : \n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }            
    return 0;
}