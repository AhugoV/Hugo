#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializar_matriz(int *matriz, int n);
void multiplicar_matrices(int *A, int *B, int *C, int n);
void imprimir_matriz(int *matriz, int n);

int main() {
    int n;
    
    printf("Introduce el tamaño de las matrices (n x n): ");
    scanf("%d", &n);

    int *A = (int *)malloc(n * n * sizeof(int));
    int *B = (int *)malloc(n * n * sizeof(int));
    int *C = (int *)malloc(n * n * sizeof(int));


    srand(time(NULL));

    inicializar_matriz(A, n);
    inicializar_matriz(B, n);


    multiplicar_matrices(A, B, C, n);

    printf("\nMatriz A:\n");
    imprimir_matriz(A, n);

    printf("\nMatriz B:\n");
    imprimir_matriz(B, n);

    printf("\nMatriz C (resultado de A * B):\n");
    imprimir_matriz(C, n);


    free(A);
    free(B);
    free(C);

    return 0;
}

void inicializar_matriz(int *matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(matriz + i * n + j) = (rand() % 10) + 1;
        }
    }
}

void multiplicar_matrices(int *A, int *B, int *C, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(C + i * n + j) = 0;
            for (int k = 0; k < n; k++) {
                *(C + i * n + j) += *(A + i * n + k) * *(B + k * n + j);
            }
        }
    }
}

void imprimir_matriz(int *matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", *(matriz + i * n + j));
        }
        printf("\n");
    }
}
