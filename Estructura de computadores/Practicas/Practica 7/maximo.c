#include <stdio.h>
#include <stdlib.h>


int calcula_maximo(int *numeros, int n);


int main() {
    int n;
    

    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);


    int *numeros = (int *)malloc(n * sizeof(int));

    printf("Ingrese %d números enteros:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }


    int maximo = calcula_maximo(numeros, n);


    printf("Números ingresados: ");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");


    printf("El valor máximo es: %d\n", maximo);


    free(numeros);

    return 0;
}

int calcula_maximo(int *numeros, int n) {

    int maximo = numeros[0]; 
    
    for (int i = 1; i < n; i++) {
        
        if (numeros[i] > maximo) {
            maximo = numeros[i]; 
        }
    }
    return maximo;
}

