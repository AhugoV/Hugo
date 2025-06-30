#include <stdio.h>

int calcula_multiplos_intervalo(int a, int b, int c);

int main() {
    int a, b, c;

    do {
        printf("Introduce tres números (a, b, c):\n");
        printf("a = ");
        scanf("%d", &a);
        printf("b = ");
        scanf("%d", &b);
        printf("c = ");
        scanf("%d", &c);

        if (a >= b || c <= 0) {
            printf("Error: a debe ser menor que b y c debe ser positivo.\n");
        }
    } while (a >= b || c <= 0);

    int multiplos = calcula_multiplos_intervalo(a, b, c);
    printf("Hay %d múltiplos de %d entre %d y %d.\n", multiplos, c, a, b);

    return 0;
}


int calcula_multiplos_intervalo(int a, int b, int c) {
    int contador = 0;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            contador++;
        }
    }

    return contador;
}
