#include<stdio.h>

int main(){
    int num;
    printf("Enter any number :");
    scanf("%d",&num);

    FILE *ptr;
    ptr = fopen("table.txt","w");
    for(int i=1;i<11;i++){
        fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
        fclose(ptr);
    }

    return 0;
}