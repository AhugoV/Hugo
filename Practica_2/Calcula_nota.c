#include <stdio.h>

int main() {
    // Este programa convierte una nota numérica a su calificación correspondiente
    int num;  // Declaro las variables de mi función
    
    // Solicito al usuario que ingrese la nota numérica
    printf("Escribe la nota numérica: ");
    
    // Leo la nota introducida por el usuario
    scanf("%d", &num);  // Guarda el número leído en la variable num
    
    // Compruebo qué nota es para imprimir la cadena correspondiente
    if ((num == 5) || (num == 6)) {
        // Nota entre 5 y 6
        printf("Aprobado\n");
    } else if ((num == 7) || (num == 8)) {
        // Nota entre 7 y 8
        printf("Notable\n");
    } else if ((num == 9) || (num == 10)) {
        // Nota entre 9 y 10
        printf("Sobresaliente\n");
    } else if ((num >= 0) && (num < 5)) {
        // Nota entre 0 y 4
        printf("Suspenso\n");
    } else {
        // En caso de que la nota esté fuera del rango válido
        printf("Error, tiene que estar entre 0 y 10\n");
    }

    // Fin del programa
    return 0;
}

