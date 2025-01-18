#include <stdio.h>

int calculator(){
  int num1, num2, choice;
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  printf("Enter your choice (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ");
  scanf("%d", &choice);
  switch (choice){
    case 1:
      return num1 + num2;
    case 2:
      return num1 - num2;
    case 3:
      return num1 * num2;
    case 4:
      if (num2 != 0)
        return num1 / num2;
      else {
        printf("Error: Division by zero\n");
        return 0;
      }
    default:
      printf("Invalid choice\n");
      return 0;
  }
}

int main(){
  int result = calculator();
  printf("Result: %d\n", result);
  printf("Press any key to exit...");
  getchar();
  getchar();
  return 0;
}