#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int randomnumber,userInput;
    randomnumber = rand() % 10;
    scanf("%d",&userInput);
    while (userInput != randomnumber)
    {
        if(userInput > randomnumber){
            printf("Sorry! Your input is HIGH. Guess somewhat LOW");
        }else if(userInput < randomnumber){
            printf("Sorry! Your input is LOW. Guess somewhat HIGH");
        }
    }

    printf("Hurray! You guessed right - %d",randomnumber);

    return 0;
    
    
    
}