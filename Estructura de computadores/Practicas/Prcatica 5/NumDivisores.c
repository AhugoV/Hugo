#include <stdio.h>


int calcula_divisores(int numero);

int main() {
    int numero;


    do {
        printf("Introduce un número positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Error: el número debe ser positivo.\n");
        }
    } while (numero <= 0);


    int cantidad = calcula_divisores(numero);
    printf("El número %d tiene %d divisores.\n", numero, cantidad);

    return 0;
}


int calcula_divisores(int numero) {
    int contador = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }
    return contador;
}
