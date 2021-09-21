#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char str[100][100],x[100];     
    printf("Enter the no. of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    for(int i=0;i<n;i++){
        strcpy(x,str[i]);
        printf("%s\n",x);
    //     for(int j ='a';j<='z';j++){
    //         x = str[i];
    //         if(x <)

    //     }
    //     // printf("%s\n",str[i]);
    }   
    return 0;
}