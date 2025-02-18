// Librería que contiene las funciones scanf y printf
#include <stdio.h>

// Función principal del programa
int main() {
    // Este programa calcula la potencia de un número
    
    // Declaro las variables de mi función
    int base, exponente, pot, i;
    
    // Solicitar al usuario la base
    printf("Escribe un número (base): ");
    // Lee el valor de la base
    scanf("%d", &base);
    
    // Solicitar al usuario el exponente
    printf("Escribe un número (exponente): ");
    // Lee el valor del exponente
    scanf("%d", &exponente);
    
    // Verifico que la base y el exponente sean mayores o iguales a 1
    if (base >= 1 && exponente >= 1) {
        // Inicializo las variables
        pot = 1;
        i = 1;
        
        // Calculo la potencia
        for (i; exponente >= 1; i++) {
            pot = pot * base;
            exponente = exponente - 1;
        }
        
        // Mostrar el resultado
        printf("La potencia es: %d\n", pot);
    } else {
        // Mensaje de error si la base o el exponente no son válidos
        printf("Error, la base y el exponente han de ser mayores o iguales a 1\n");
    }
    
    // Fin del programa
    return 0;
}

