#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int guess;
  printf("Guess a random number between 1 and 10: ");
  scanf("%c", &guess);
  srand(time(0));
  int randomNumber = (rand() % 10) + 1;
  while (guess != randomNumber){
    if (guess < randomNumber){
      printf("Too low, try again: ");
    }
    else if (guess > randomNumber){
      printf("Too high, try again: ");
    }
    scanf("%d", &guess); 
  }
  printf("You guessed it! The number was %d, press any button to exit", randomNumber);
  getchar();
  getchar();
  return 0;
}
