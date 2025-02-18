#include <stdio.h>

int main() {
    int opcion;
    double radio, altura, lado1, lado2, volumen;
    
    
    while (1) {

    printf("Seleccione la figura para calcular el volumen:\n");
    printf("1. Cono\n");
    printf("2. Ortoedro\n");
    printf("3. Salir\n");
    printf("Elija una opcion (1, 2 o 3): ");
    scanf("%d", &opcion);

    if (opcion == 1) {

        printf("Introduce el radio del cono: ");
        scanf("%lf", &radio);
        printf("Introduce la altura del cono: ");
        scanf("%lf", &altura);


        if (radio > 0 && altura > 0) {
            volumen = (((radio * radio * altura) * 1.0/3.0) * 3.14);
            
            printf("El volumen del cono es: %.2f\n", volumen);
            
        } else {
            
            printf("Error: El radio y la altura deben ser positivos.\n");
        }
    }

    else if (opcion == 2) {
        
        printf("Introduce el primer lado del ortoedro: ");
        scanf("%lf", &lado1);
        printf("Introduce el segundo lado del ortoedro: ");
        scanf("%lf", &lado2);
        printf("Introduce la altura del ortoedro: ");
        scanf("%lf", &altura);

        if (lado1 > 0 && lado2 > 0 && altura > 0) {
            volumen = lado1 * lado2 * altura;
            printf("El volumen del ortoedro es: %.2f\n", volumen);
        } else {
            printf("Error: Los lados y la altura deben ser positivos.\n");
        }
    }
    
    else if (opcion == 3) {
        
        break;
    }
    
    else {
        printf("Error: Opción no válida. Por favor, elija 1, 2 o 3.\n");
    }
    
    }

    return 0;
}


