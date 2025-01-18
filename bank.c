#include <stdio.h>

int choice;
int withdraw;
int deposit;
int balance = 0;

int main() {
  while (choice != 4){
    printf("Welcome to NiggaBank! What do you want to do today?\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    scanf("%d", &choice);
    switch (choice){
      case 1:
        printf("How much you want to deposit?\n");
        scanf("%d", &deposit);
        balance += deposit;
        printf("You have deposited $%d.\n", deposit);
        break;
      case 2:
        printf("You have $%d in your account. How much you want to withdraw?\n", balance);
        scanf("%d", &withdraw);
        if (withdraw > balance){
          printf("You don't have enough money in your account!\n");
        }
        else{
        balance -= withdraw;
        printf("You have withdrawn $%d.\n", withdraw);
        break;
        }
      case 3:
        printf("Your current balance is $%d\n", balance);
        break;
      case 4:
        printf("Press any key to exit NiggaBank...\n");
        printf("NiggaBank exiting! Have a niggafying day, nigga");
        getchar();
        getchar();
        break;
    }
  }
}