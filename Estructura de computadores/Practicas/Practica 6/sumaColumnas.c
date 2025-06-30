#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 3
#define COLUMNAS 6


void inicializar_matriz(int matriz[FILAS][COLUMNAS]);
void sumaColumnas(int matriz[FILAS][COLUMNAS], int resultado[COLUMNAS]);

int main() {
    int matriz[FILAS][COLUMNAS];
    int suma_col[COLUMNAS];


    srand(time(NULL));
    inicializar_matriz(matriz);

    printf("Matriz inicializada:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    sumaColumnas(matriz, suma_col);

    printf("\nSuma de cada columna:\n");
    for (int i = 0; i < COLUMNAS; i++) {
        printf("Columna %d: %d\n", i + 1, suma_col[i]);
    }

    return 0;
}

void inicializar_matriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = (rand() % 10) + 1;
        }
    }
}

void sumaColumnas(int matriz[FILAS][COLUMNAS], int resultado[COLUMNAS]) {
    for (int j = 0; j < COLUMNAS; j++) {
        resultado[j] = 0;
        for (int i = 0; i < FILAS; i++) {
            resultado[j] += matriz[i][j];
        }
    }
}
