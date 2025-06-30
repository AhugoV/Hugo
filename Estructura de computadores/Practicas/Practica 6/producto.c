#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

void inicializa(int matriz[TAM][TAM]);
void producto(int A[TAM][TAM], int B[TAM][TAM], int C[TAM][TAM]);
void imprime(int matriz[TAM][TAM]);

int main() {
    int matriz1[TAM][TAM], matriz2[TAM][TAM], resultado[TAM][TAM];
    srand(time(NULL));


    inicializa(matriz1);
    inicializa(matriz2);

    printf("Matriz 1:\n");
    imprime(matriz1);

    printf("\nMatriz 2:\n");
    imprime(matriz2);

    producto(matriz1, matriz2, resultado);

    printf("\nProducto de Matriz 1 x Matriz 2:\n");
    imprime(resultado);

    return 0;
}

void inicializa(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = (rand() % 5) + 1;
        }
    }
}

void imprime(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void producto(int A[TAM][TAM], int B[TAM][TAM], int C[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            C[i][j] = 0;
            for (int k = 0; k < TAM; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
