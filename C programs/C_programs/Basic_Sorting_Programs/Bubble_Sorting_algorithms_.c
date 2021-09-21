#include<stdio.h>

int main(){
    int str[40] , a;

    printf("Enter no. of elements : ");
    scanf("%d",&a);
    printf("Enter %d integer\n",a);

    for(int i=0;i<a;i++){
        scanf("%d",&str[i]);    
    }
    // We are using bubble sorting here
    for(int i=0;i<a-1;i++){     // Remember that  
        for(int j=0;j<a-1;j++){ // a-1 is here because there will be no any value 
            if(str[j]>str[j+1]){   // after the last number for comparison
                int temp = str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }   

        }
    }
    printf("Sorting list in ascending order\n");
    for(int i=0;i<a;i++){
        printf("%d ",str[i]);    
    }
    return 0;
}