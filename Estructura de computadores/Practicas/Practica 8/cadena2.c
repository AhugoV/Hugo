#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invierte(char *cadenaOrigen, char *cadenaDestino);

int main() {
    printf("Introduce una cadena: \n");

    char *cadenaOrigen = (char *) malloc(sizeof(char) * 100);
    char *cadenaDestino = (char *) malloc(sizeof(char) * 100);


    fgets(cadenaOrigen, 100, stdin);
    

    invierte(cadenaOrigen, cadenaDestino);
    printf("La cadena invertida es: %s\n", cadenaDestino);

    free(cadenaOrigen);
    free(cadenaDestino);

    return 0;
}

void invierte(char *cadenaOrigen, char *cadenaDestino) {
    int length = strlen(cadenaOrigen);
    int j = length - 1;
    for (int i = 0; i < length; i++) {
        cadenaDestino[i] = cadenaOrigen[j];
        j--;
    }

    cadenaDestino[length] = '\0';
}

