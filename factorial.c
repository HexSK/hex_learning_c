#include <stdio.h>

int main() {
    int x, xFact = 1;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("You entered: %d\n", x);

    if (x >= 0) {
        for (int i = 1; i <= x; i++) {
            xFact *= i;
        }
        printf("The factorial of %d is: %d\nPress any key to exit...", x, xFact);
    } else {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }

    getchar();
    getchar();
    
    return 0;
}