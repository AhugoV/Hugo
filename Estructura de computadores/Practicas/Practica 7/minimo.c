#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void inicializar_matriz(int *a, int n, int m);
void imprimir_matriz(int *a, int n, int m);
int calculaMinimo(int *a, int n, int m);


int main() {
    int *p;
    int n, m;
   

   
    printf("Introduce el número de filas: ");
    scanf("%d", &n);
    printf("Introduce el número de columnas: ");
    scanf("%d", &m);

    p = (int*) malloc(n * m * sizeof(int));
   
    srand(time(NULL));
   
    inicializar_matriz(p, n, m);
    imprimir_matriz(p, n, m);
    int minimo = calculaMinimo(p, n, m);
   
    printf("El minimo es: %d \n", minimo);

    free(p);
   
    return 0;
}

void inicializar_matriz (int *a, int n, int m) {
   
   
    for(int i = 0; i < n; i++) {
       
        for(int j = 0; j < m; j++) {
           
            a[i * m + j] = rand() % 10 + 1;
           
        }
       
       
    }
   
}

void imprimir_matriz(int *a, int n, int m) {
   
    printf("La matriz generada es: \n");
   
    for(int i = 0; i < n; i++) {
       
        for(int j = 0; j < m; j++) {
           
            printf("%3d ", a[i * m + j]);
   
        }
       
        printf("\n");
    }
}


int calculaMinimo(int *a, int n, int m) {
   
    int minimo = 11;
   
    for(int i = 0; i < n * m; i++) {
       
        if (a[i] < minimo) {
           
            minimo = a[i];
           
        }
       
    }
    return minimo;
   
   
}



