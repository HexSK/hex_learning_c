#include <stdio.h>
/*
blinmaker ingredients:
- min eggs = 1
- min milk = 200
- min flour = 100
*/


void main(){
  int minEggs, minMilk, minFlour;
  int eggs, milk, flour;
  minEggs = 1;
  minMilk = 200;
  minFlour = 100;

  printf("Hello!\n");
  printf("Blinmaker starting up...\n");
  printf("Hello Juan, how many eggs you have?\n");
  scanf("%d", &eggs);
  printf("Juan, you have %d eggs!\n", eggs);
  printf("How many milk you have?\n");
  scanf("%d", &milk);
  printf("Juan, you have %d milk!\n", milk);
  printf("How many flour you have?\n");
  scanf("%d", &flour);
  printf("Juan, you have %d !\n", flour);

  if (eggs < minEggs || milk < minMilk || flour < minFlour) {
    printf("no enough something :( no blin today\n Blinmaker shutting down...");
    getchar();
    getchar();
  } else{
    printf("we make blin \n");
    eggs /= minEggs;
    flour /= minFlour;
    milk /= minMilk;
    printf("You have %d portions of egg,\n%d portions of flour,\n%d portions of milk\n", eggs, flour, milk);
    int smallest;
    if (eggs <= milk && milk <= flour){
      smallest = eggs;
    } else if (milk <= flour && milk <= eggs){
      smallest = milk;
    } else {
      smallest = flour;
    }
    printf("You can make %d blins\n", smallest*4); //one púortion make 4 blin
    printf("You need %d eggs, %d milk and %d flour to make 1 portion (4 blin)\n Press any key to continue..", minEggs*smallest, minMilk*smallest, minFlour*smallest);
    getchar();
    getchar();
  }
}