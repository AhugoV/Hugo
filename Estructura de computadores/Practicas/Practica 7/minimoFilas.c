#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializar_matriz(int *matriz, int n, int m);
void minimoFilas(int *matriz, int n, int m, int *minimos);
void imprimir_matriz(int *matriz, int n, int m);

int main() {
    int n, m;
    
    printf("Introduce el número de filas (máx 100): ");
    scanf("%d", &n);
    printf("Introduce el número de columnas (máx 100): ");
    scanf("%d", &m);


    int *matriz = (int *)malloc(n * m * sizeof(int)); 
    int *minimos = (int *)malloc(n * sizeof(int)); 


    srand(time(NULL));


    inicializar_matriz(matriz, n, m);
    printf("\nMatriz generada:\n");
    imprimir_matriz(matriz, n, m);


    minimoFilas(matriz, n, m, minimos);

    
    printf("\nMínimos por fila:\n");
    for (int i = 0; i < n; i++) {
        printf("Fila %d: %d\n", i + 1, minimos[i]);
    }

    free(matriz);
    free(minimos);

    return 0;
}

void inicializar_matriz(int *matriz, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(matriz + i * m + j) = (rand() % 21) - 10;
        }
    }
}


void minimoFilas(int *matriz, int n, int m, int *minimos) {
    for (int i = 0; i < n; i++) {
        int min = *(matriz + i * m); 
        for (int j = 1; j < m; j++) {
            int valor = *(matriz + i * m + j);
            if (valor < min) {
                min = valor;
            }
        }
        minimos[i] = min;
    }
}


void imprimir_matriz(int *matriz, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d ", *(matriz + i * m + j));
        }
        printf("\n");
    }
}
