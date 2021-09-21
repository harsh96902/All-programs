#include<stdio.h>
void fibonacci_series(int n){
    int next=0,i = 0,t1 = 0,t2 = 1;
    while(i<n){
        if(i == 0){
            printf("0 ");
            i++;
        }
        else{
            next = t1 + t2;
            t1 = t2;
            t2 = next;
            printf("%d ",next);  
            i++;
        }    
    }        
}
// void pattern(int n){
//     int a = n;
//     while(n--){
//         for(int i =1;i<=a;i++){
//             if(i == (a/2)){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//             printf("\n");
//         }
//     }
// }
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    char c[100];
    printf("Enter something about you: ");
    scanf("%[^\n]%*c",&c);  // remember this is used to input any sentence
    printf("%s",c);
    // printf("Enter any number: ");
    // scanf("%d",&n);    
    // fibonacci_series(n);
    // pattern(n);
    // pattern2(n);
    return 0;
}