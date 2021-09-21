#include<stdio.h>

int main(){
    // char ptr[] = "Harsh bhai"; // This is the short method to print any string
    char *ptr = "Harsh bhai";
    // Diffrence  between ptr[] and *ptr
    // ptr[] cannot assign another string like below 
    // *ptr can inialise the string at that address
    // So *ptr  is more beneficial than ptr[]

    ptr = "Harry bhai"; 
    printf("%s",ptr);
    return 0;
}