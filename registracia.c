#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char prezyvka[100];
    while (1) {
        printf("Vložte prezývku: ");
        fgets(prezyvka, sizeof(prezyvka), stdin);
        prezyvka[strcspn(prezyvka, "\n")] = 0;
        if (strlen(prezyvka) == 0) {
            break;
        }
        if (isalnum(prezyvka[0])) {
            if (strlen(prezyvka) >= 5 && strlen(prezyvka) <= 15) {
                if (isalpha(prezyvka[0])) {
                    printf("Ďakujeme za registráciu %s\n", prezyvka);
                    break;
                } else {
                    printf("Prezývka musí začínať písmenom!\n");
                }
            } else {
                printf("Prezývka musí mať 5-15 znakov!\n");
            }
        } else {
            printf("Prezývka môže obsahovať len čísla a písmená!\n");
        }
    }
    printf("Stlačte Enter pre ukončenie programu :3");
    getchar();
    return 0;
}