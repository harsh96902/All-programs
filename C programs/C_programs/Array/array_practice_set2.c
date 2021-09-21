#include<stdio.h>
void mulTable(int n,int num ){
    int mul[10];
    printf("Multipplication Table of %d :--\n",num);
    for(int i=0;i<n;i++){
        mul[i]=num*(i+1);
        printf("%d X %d = %d\n",num,i+1,mul[i]);
    }
    printf("**********************************************\n");
}
int main(){
    mulTable(10,7);
    mulTable(10,9);
    mulTable(10,6);
    
    return 0;
}