#include <stdio.h>

int main() {
    // Este programa calcula la suma de los primeros n números
    int num, total, i;  // Declaro las variables de mi función
    
    // Solicito al usuario que ingrese la cantidad de números a sumar
    printf("Escribe cuantos números quieres sumar: ");
    
    // Leo el número introducido por el usuario
    scanf("%d", &num);  // Guarda el número leído en la variable num
    
    // Inicializo las variables
    total = 0;
    i = 1;
    
    // Compruebo si el número introducido es mayor o igual que 1
    if (num >= 1) {
        // Hago el bucle para sumar hasta que i valga num
        do {
        total = total + i;  // Calculo la suma parcial
            i = i + 1;  // Aumento i
        
        } while (i <= num);
        
        // Imprimo el resultado de la suma
        printf("La suma es: %d \n", total);
    } else {
        // En caso de que el número sea menor que 1
        printf("Error, el número ha de ser mayor o igual a 1\n");
    }
    
    // Fin del programa
    return 0;
}
