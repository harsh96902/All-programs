#include<stdio.h>

int main(){
    int n,a[10],b[10],c[10],d[10];
    printf("Enter no. of cases : ");
    scanf("%d",&n);
    
    for(int i = 0;i<n;i++){
        printf("Enter all three angles; ");
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    for(int i=0;i<n;i++){
        d[i]=a[i]+b[i]+c[i];
        if(d[i] == 180){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}