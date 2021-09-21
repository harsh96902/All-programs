#include<stdio.h>  // Function is used to perform any specific task 
void display();  // Function prototype  (display is the name of any function)
int main(){
    int a;
    printf("This one is first\n");
    display();    // Function call  (This is used for the function call)
                                    //   (we can use it anywhere)
    printf("This one is last\n");
    return 0;
}
void display(){       // Function definition  (Define any task inside this)
    printf("This one is second\n");
}