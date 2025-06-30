#include <stdio.h>

int NumDivisores(int numero);
int calcula_si_es_primo(int numero);

int main() {
    int numero;

    do {
        printf("Introduce un número positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Error: el número debe ser positivo.\n");
        }
    } while (numero <= 0);


    if (calcula_si_es_primo(numero)) {
        printf("El número %d es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }

    return 0;
}

int NumDivisores(int numero) {
    int contador = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }
    return contador;
}


int calcula_si_es_primo(int numero) {
    int divisores = NumDivisores(numero);
    if (divisores == 2) {
        return 1; // Es primo
    } else {
        return 0; // No es primo
    }
}
