#include<stdio.h>

struct harsh{
    int code;
    char name;
};
int main(){
    struct harsh e1;
    struct harsh *ptr;
    ptr = &e1;
    (*ptr).code=101;  // remember this (*ptr)
    // we can write also like this (*ptr).code = ptr->code

    printf("code is %d ",(*ptr).code);
    
    return 0;
}