#include<stdio.h>

int main(){
    int i = 45;
    int *j = &i;  // j will store the address of i
    int **k=&j;   // This is pointer to pointer
    // "k will store the address of j"
    printf("The value of i is : %d\n",i);
    printf("The value of i is : %d\n",*j);
    printf("The address of  i is : %u\n",&i);
    printf("The address of  j is : %u\n",j);
    printf("The address of  j is : %u\n",&j);
    printf("The value of  i is : %u\n",*(&j));
    printf("The address of  j is : %u\n",k);

    return 0;
}