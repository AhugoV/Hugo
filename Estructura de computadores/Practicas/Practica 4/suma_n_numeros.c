#include <stdio.h>

void suma_n_primeros_nums (int b);

int main () {

    int a;
    printf ("Introduce un numero:");
    scanf("%d", &a);

    while (a<0) {
    
    printf("Error\n");
    scanf("%d", &a);

    }

    suma_n_primeros_nums (a);

}

void suma_n_primeros_nums (int b) {

    int total, i;
    total = 0;
    i = 1;
    
    // Compruebo si el número introducido es mayor o igual que 1
    if (b >= 1) {
        // Hago el bucle para sumar hasta que i valga num
        while (i <= b) {
            total = total + i;  // Calculo la suma parcial
            i++;
        }
    }

    printf("La suma del valor introducido es: %d\n",total);

}
