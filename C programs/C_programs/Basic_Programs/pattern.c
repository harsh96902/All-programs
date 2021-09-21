#include<stdio.h>
void pattern1(int num);
void pattern2(int num);
void pattern3(int num);
int main(){
    int num;
    int p,x;
    do{
        printf("Enter 1 for pattern 1\n");
        printf("Enter 2 for pattern 2\n");
        printf("Enter 3 for pattern 3\n");
        printf("Enter 0 for exit\n");
        scanf("%d",&p);
        if(p==1){
            printf("Enter no. of rows: ");
            scanf("%d",&num);
            pattern1(num);
        }
        else if(p == 0){
            p=0;
        }
        else if(p==2){
            printf("Enter no. of rows: ");
            scanf("%d",&num);
            pattern2(num);
        }
        else if(p==3){
            printf("Enter no. of rows: ");
            scanf("%d",&num);
            pattern3(num);
        }
        else{
            printf("You have entered Wrong number\n");
        }
    }while(p != 0);        
    return 0;
}
void pattern1(int num){
    for(int i=num;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

}
void pattern2(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern3(int num){
     for(int i=1;i<=num;i++){
        for(int j=(num-1);j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<=2*(i-1);k++){
            printf("*");
        }
        printf("\n");
    }
}        