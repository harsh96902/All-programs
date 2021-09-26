#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int final_count = 0;
    int temp_count =0;
    int num = arr[0];
    for(int j =0;j<n;j++){
        for(int k = j;k<n;k++){
            if(arr[j] == arr[k]){
                temp_count++;   
            }
        }
        if(temp_count > final_count){
            final_count = temp_count;
            num = arr[j];
        }
    }
    printf("%d",num);
    return 0;
}