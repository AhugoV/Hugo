#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitaespacios(char *cadena, char *cadenasin, int n);

int main() {
    
    int n;
    printf("Introduce el numero de caracteres: \n");
    scanf("%d", &n);

    char *cadena = (char *) malloc(sizeof(char) * (n + 1));
    char *cadenasin = (char *) malloc(sizeof(char) * (n + 1));
    getchar();

    printf("Introduce la cadena: ");
    fgets(cadena, n + 1, stdin);
    


    quitaespacios(cadena, cadenasin, n);
    printf("La cadena sin espacios es: %s\n", cadenasin);

    free(cadena);
    free(cadenasin);

    return 0;
}

void quitaespacios(char *cadena, char *cadenasin, int n) {
    
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (*(cadena + i) != ' ') {
            cadenasin[j] = *(cadena + i);
            j++;
        }
    }
    cadenasin[j] = '\0';
}

