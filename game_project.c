#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int  number, guess, choice;
     int win = 0;

    srand(time(0));
    number = rand() % 100 +1;

    printf("1.Start Game \n");
    printf("2. Exit\n");
    printf("Enter your choice");
    scanf("%d", &choice);

    switch(choice){

    
      case 1:
      for(int i = 1; i<=5; i++){
       
        
        printf("Attempt %d:Enter your gyess:",i);
        scanf("%d", &guess);

         if(guess ==number){
            printf("Congratulations! You won!\n");
            win = 1;
            break;
        }
        else if(guess<number){
            printf("Too Low!\n");
        }
        else{
            printf("Too High!\n");
        }
      } if(win ==0){
            printf("Game Over ! Try again");
            printf("Correct Number was:%d\n", number);
      }
 
        break;

        case 2:
        printf("Thank You!");
        return 0;

        default :
        printf("Invalid Choice");

    }

}