#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 6
#define COLUMNAS 6

void inicializar_matriz(int matriz[FILAS][COLUMNAS]);
int suma(int matriz[FILAS][COLUMNAS]);

int main() {
    int matriz[FILAS][COLUMNAS];
    int total;

    srand(time(NULL));
    inicializar_matriz(matriz);

    printf("Matriz inicializada:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }


    total = suma(matriz);
    printf("\nLa suma de todos los elementos de la matriz es: %d\n", total);

    return 0;
}


void inicializar_matriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = (rand() % 10) + 1;
        }
    }
}


int suma(int matriz[FILAS][COLUMNAS]) {
    int total = 0;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            total += matriz[i][j];
        }
    }

    return total;
}
