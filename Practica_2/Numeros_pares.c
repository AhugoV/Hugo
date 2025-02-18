#include <stdio.h>

int main() {
    int num1, num2;
    
    do {
        printf("Ingrese el primer número: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%d", &num2);
        
        if (num1 >= num2) {
            printf("Error: El primer número debe ser menor que el segundo. Inténtelo de nuevo.\n");
        }
    } while (num1 >= num2);
    
    printf("Números pares entre %d y %d:\n", num2, num1);
    for (int i = num2 - (num2 % 2); i > num1; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}

