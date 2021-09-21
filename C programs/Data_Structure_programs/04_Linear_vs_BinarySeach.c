#include<stdio.h>
// void linearSearch(int arr[],int size,int num){
//     for(int i = 0; i < size; i++)
//     {
//         if(arr[i]==num){
//             return i;
//         }
//     }
//     return -1;    
    
// }
int binarySearch(int arr[],int size,int num){
    int low,mid,high;
    low = 0;
    high = size-1;

    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==num){
            return mid;
        }
        if(arr[mid]<num){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }return -1;
}
int main(){
//    int arr[]={4,6,8,3,9,10,1};
   int arr[]={1,3,5,6,7,8,9};
   
   int num;
   int size = sizeof(arr)/sizeof(int);  // It is used to calculate the size of array
   printf("Enter the element You want to Search : ");
   scanf("%d",&num);
//    int searchingPosition=linearSearch(arr,size,num);
//    printf("Searching successful by linear search method\n");
//    printf("Position of the element %d is %d",num,searchingPosition);
   int searchingPosition2=binarySearch(arr,size,num);
   printf("Searching successful by binary search method\n");
   printf("Position of the element %d is %d",num,searchingPosition2);
   return 0;
}