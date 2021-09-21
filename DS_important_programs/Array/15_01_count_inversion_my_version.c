#include<stdio.h>
int inversionCount(int arr[],int n)
{
    // Your Code Here
    int a =0;
    for(int i=0;i<n;i++){
        int x =arr[i];
        for(int j=i;j<n;j++){
            if(arr[j]<x){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                x = arr[i];
                a++;   
            }
        }
    }
    for(int i=0;i<n;i++){
        // printf("%d ",arr[i]);
    }
    return a;

}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%d",inversionCount(arr,n));
    }
    return 0;
}