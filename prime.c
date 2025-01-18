#include <stdio.h>
#include <math.h>

int main(){
  int num;
  printf("Hello! Input the number you want to check:\n");
  scanf("%d", &num);
  if (num > 0) {
    if (num < 2){
      printf("The number is not prime.");
    }
    else {
      for (int i = 2; i < sqrt(num), i++;) {
        if (num % i == 0) {
          printf("The number %d is not prime.", num);
          getchar();
          getchar();
          break;
        }
        else {
          printf("The number %d is prime.", num);
          getchar();
          getchar();
          break;
        }
      }
    }
  } else{
    printf("The number is negative or 0. Press any key to exit...");
  }
}
