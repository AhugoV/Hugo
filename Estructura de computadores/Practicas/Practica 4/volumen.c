#include <stdio.h>

int menu();
int volumen_cono();
int volumen_ortoedro();

int main() {
    
    int a = menu();

    volumen_cono(a);
    volumen_ortoedro(a);
    

    return 0;
    }

int menu (){
    int opcion;
    
    do {

       printf("Seleccione la figura para calcular el volumen:\n");
    printf("1. Cono\n");
    printf("2. Ortoedro\n");
    printf("3. Salir\n");
    printf("Elija una opcion (1, 2 o 3): ");
    scanf("%d", &opcion);
    if (opcion != 1 && opcion != 2 && opcion != 3) {
        printf("Error: Opción no válida. Por favor, elija 1, 2 o 3.\n");
    }
    if (opcion == 3) {
        
        break;
    }
    } while (1);

 

    return opcion;
}

int volumen_cono(int h) {
        int opcion = h;
if (opcion == 1) {


        double volumen, radio, altura;

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


}

int volumen_ortoedro(int i) {
    int opcion = i;
    double lado1, lado2, altura, volumen;

    if (opcion == 2) {
        
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

}
   