#include<stdio.h>

int main(){
    int lower_num = 153;
    int upper_num = 500;
    int d,p,i,sum = 0;
    for(int j = lower_num;j<=upper_num;j++){
        i = j;
        while(i!=0){
            d = i%10;
            p = d*d*d;
            sum = sum + p;
            i = i/10;
        }
        if(sum == j){
            printf("%d ",j);
        }
    }    
    return 0;
}