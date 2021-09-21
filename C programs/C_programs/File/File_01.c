#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("Harsh.txt","r");// This is read mode
    // ptr = fopen("Harsh.txt","w");   // This is write mode
    // ptr = fopen("Harsh.txt","a");   // This is append mode   

    return 0;
}