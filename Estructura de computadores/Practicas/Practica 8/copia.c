#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char cadena[MAX];
    char compara[] = "compara";
    char añadida[] = "añadida";


    printf("Ingrese una cadena : ");
    fgets(cadena, MAX, stdin);


    printf("Longitud de la cadena: %ld\n", strlen(cadena));


    if (strcmp(cadena, compara) == 0) {
        printf("La cadena ingresada es igual a compara \n");
    } else {
        printf("La cadena ingresada NO es igual a compara \n");
    }


    strcat(cadena, añadida);
    printf("Cadena tras concatenar: %s\n", cadena);



    printf("La letra en la posición 4 es: %c\n", cadena[4]);

    return 0;
}

