#include <stdio.h>


int main() {
    // Este programa indica si el número leído por teclado es 3
    int num;  // Declaro las variables de mi función
    
    // Solicito al usuario que ingrese un número
    printf("Escribe un número: ");
    
    // Leo el número introducido por el usuario
    scanf("%d", &num); // Guarda el número leído en la variable num
    
    // Compruebo si el número introducido es el 3
    if (num == 3) {
        // Si el número es 3, imprimo un mensaje
        printf("Has introducido un 3\n");
    } else {
        // Si el número no es 3, imprimo el número introducido
        printf("No has introducido un 3 sino un %d\n", num);
    }
    
    // Imprimo mensaje final
    printf("Fin del algoritmo\n");
    
    return 0;
}

