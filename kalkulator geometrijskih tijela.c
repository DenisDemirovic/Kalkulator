#include <stdio.h>
#include <math.h>

// Funkcija za izračunavanje površine i obima kvadrata
void kvadrat(float a) {
    printf("Površina kvadrata: %.2f\n", a * a);
    printf("Obim kvadrata: %.2f\n", 4 * a);
}
// Funkcija za izračunavanje površine i obima pravougaonika
void pravougaonik(float a, float b) {
    printf("Površina pravougaonika: %.2f\n", a * b);
    printf("Obim pravougaonika: %.2f\n", 2 * (a + b));
}
// Funkcija za izračunavanje površine i obima kruga
void krug(float r) {
    printf("Površina kruga: %.2f\n", M_PI * r * r);
    printf("Obim kruga: %.2f\n", 2 * M_PI * r);
}
// Funkcija za validaciju unosa (pozitivni brojevi)
float validan_unos() {
    float broj;
    while (1) {
        scanf("%f", &broj);
        if (broj > 0) {
            return broj;
        } else {
            printf("Unos mora biti pozitivan broj! Pokušajte ponovo: ");
        }
    }
}
int main() {
    int izbor;
    do {
        // Meni programa
        printf("\n--- Kalkulator geometrijskih oblika ---\n");
        printf("1. Kvadrat\n");
        printf("2. Pravougaonik\n");
        printf("3. Krug\n");
        printf("4. Izlaz\n");
        printf("Izaberite opciju: ");
        scanf("%d", &izbor);

        switch (izbor) {
            case 1: {
                printf("Unesite dužinu stranice kvadrata: ");
                float a = validan_unos();
                kvadrat(a);
                break;
            }
            case 2: {
                printf("Unesite dužine stranica pravougaonika (a i b): ");
                float a = validan_unos();
                float b = validan_unos();
                pravougaonik(a, b);
                break;
            }
            case 3: {
                printf("Unesite poluprečnik kruga: ");
                float r = validan_unos();
                krug(r);
                break;
            }
            case 4:
                printf("Izlaz iz programa. Hvala na korištenju!\n");
                break;
            default:
                printf("Pogrešan izbor! Pokušajte ponovo.\n");
        }
    } while (izbor != 4);
    return 0;
}
