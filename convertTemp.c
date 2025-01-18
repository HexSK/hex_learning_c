#include <stdio.h>

float c_to_f(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float c_to_k(float celsius) {
    return celsius + 273.15;
}

float f_to_c(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float f_to_k(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

float k_to_c(float kelvin) {
    return kelvin - 273.15;
}

float k_to_f(float kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main() {
    int choice1, choice2;
    float temperature, celsius, fahrenheit, kelvin;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("You want to convert from:\n");
    printf("1. \u00B0C\n");
    printf("2. \u00B0F\n");
    printf("3. \u00B0K\n");
    scanf("%d", &choice1);

    switch (choice1) {
        case 1:
            celsius = temperature;
            printf("You want to convert from \u00B0C to:\n");
            printf("1. \u00B0F\n");
            printf("2. \u00B0K\n");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1:
                    fahrenheit = c_to_f(celsius);
                    printf("%.2f \u00B0C is equal to %.2f \u00B0F\nPress any key to continue...", celsius, fahrenheit);
                    getchar();
                    getchar();
                    break;
                case 2:
                    kelvin = c_to_k(celsius);
                    printf("%.2f \u00B0C is equal to %.2f \u00B0K\nPress any key to continue...", celsius, kelvin);
                    getchar();
                    getchar();
                    break;
                default:
                    printf("Invalid input, press any key to exit!");
                    getchar();
                    getchar();
                    break;
            }
            break;
        case 2:
            fahrenheit = temperature;
            printf("You want to convert from \u00B0F to:\n");
            printf("1. \u00B0C\n");
            printf("2. \u00B0K\n");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1:
                    celsius = f_to_c(fahrenheit);
                    printf("%.2f \u00B0F is equal to %.2f \u00B0C\nPress any key to continue...", fahrenheit, celsius);
                    getchar();
                    getchar();
                    break;
                case 2:
                    kelvin = f_to_k(fahrenheit);
                    printf("%.2f \u00B0F is equal to %.2f \u00B0K\nPress any key to continue...", fahrenheit, kelvin);
                    getchar();
                    getchar();
                    break;
                default:
                    printf("Invalid input, press any key to exit!");
                    getchar();
                    getchar();
                    break;
            }
            break;
        case 3:
            kelvin = temperature;
            printf("You want to convert from \u00B0K to:\n");
            printf("1. \u00B0C\n");
            printf("2. \u00B0F\n");
            scanf("%d", &choice2);
            switch (choice2) {
                case 1:
                    celsius = k_to_c(kelvin);
                    printf("%.2f \u00B0K is equal to %.2f \u00B0C\nPress any key to continue...", kelvin, celsius);
                    getchar();
                    getchar();
                    break;
                case 2:
                    fahrenheit = k_to_f(kelvin);
                    printf("%.2f \u00B0K is equal to %.2f \u00B0F\nPress any key to continue...", kelvin, fahrenheit);
                    getchar();
                    getchar();
                    break;
                default:
                    printf("Invalid input, press any key to exit!");
                    getchar();
                    getchar();
                    break;
            }
            break;
        default:
            printf("Invalid choice\n");
            getchar();
            getchar();
            break;
    }

    return 0;
}