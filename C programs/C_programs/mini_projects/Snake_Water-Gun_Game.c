#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//  There are some error in this program left this for checking 
int game(char you,char comp);
// void random_choose(int num);

int main(){
    char you , comp;
    printf("Enter 's' for snake,'w' for water amd  'g' for gun\n");
    
    int your_points=0;
    int comp_points=0;

    for(int chances=0;chances<10;chances++){
        scanf("%c",&you);
        srand(time(0));
        int num = rand()%100 +1 ;
        // random_choose(num);
        if(num<33){
            comp='s';
        }
        else if(num>33 && num<66){
            comp='w';
        }
        else if(num>66 && num<100){
            comp='g';
        }
        else{
            comp=0;
        }    

        // game(you,comp);
        int result=game(you,comp);

        printf("You choose %c and computer choose %c\n",you,comp);

        if(result == 1){
            printf("You win\n");
            your_points=your_points+1;
        }
        else if(result == 0){
            printf("Game draw\n");
            your_points=your_points+1;
            comp_points=comp_points+1;
        }
        else{
            printf("comp win\n");
            comp_points=comp_points+1;
        }
        printf("Your point is %d and computer point is %d\n",your_points,comp_points);

    }
    if(your_points>comp_points){
        printf("You win this game");
    }
    else if(your_points=comp_points){
        printf("Game is draw");
    }
    else{
        printf("Computer win this game");
    }    
    
    return 0;
}
int game(char you,char comp){

    if(you == 's' && comp == 'w'){
        return 1;
    }
    else if(you == 'w' && comp == 'g'){
        return 1;
    }    
    else if(you == 'g' && comp == 's'){
        return 1;
    }
        
    else if(you == comp){
        return 0;    
    }
    else{
        return -1;
    }
}
// void random_choose(int num){  // left for checking why its not working
//     char comp;
    // int num;
    // if(num<33){
    //     comp='s';
    // }
    // else if(num>33 && num<66){
    //     comp='w';
    // }
    // else if(num>66 && num<100){
    //     comp='g';
    // }
    // else{
    //     comp=0;
    // }    
    
// }

