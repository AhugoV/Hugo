#include <stdio.h>

int potencia(int b, int a);

int main() {

    int base, exponente, pot, i;
    
    printf("Escribe un número (base): ");

    scanf("%d", &base);
    
    printf("Escribe un número (exponente): ");

    scanf("%d", &exponente);
    
    if (base >= 1 && exponente >= 1) {

        int c = potencia(base, exponente);
        
        printf("La potencia es: %d\n", c);
    } else {

        printf("Error, la base y el exponente han de ser mayores o iguales a 1\n");
    }
    
    

    return 0;
}

int potencia(int a, int b) {

    int i;
    int pot;

    pot = 1;
    i = 1;
    
    while (a >= 1) {
        pot = pot * b;
        a = a - 1;
    }
    return pot;

}