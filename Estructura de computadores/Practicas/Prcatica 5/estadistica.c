#include <stdio.h>

int menu();
float media();
float desviacion();
float raiz_cuadrada(float numero);

int main() {
    int opcion;
    float resultado;

    do {
        opcion = menu();

        switch (opcion) {
            case 1:
                resultado = media();
                printf("La media es: %.2f\n", resultado);
                break;
            case 2:
                resultado = desviacion();
                printf("La desviación típica es: %.2f\n", resultado);
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
        }
    } while (opcion != 3);

    return 0;
}

int menu() {
    int opcion;

    do {
        printf("\n--- Menú ---\n");
        printf("1. Calcular media\n");
        printf("2. Calcular desviación típica\n");
        printf("3. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        if (opcion < 1 || opcion > 3) {
            printf("Opción no válida. Intenta de nuevo.\n");
        }

    } while (opcion < 1 || opcion > 3);

    return opcion;
}


float media() {
    int numeros[5], suma = 0;

    printf("Introduce 5 números enteros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }

    return (float)suma / 5;
}


float desviacion() {
    int numeros[5];
    float suma = 0, m, sumatoria = 0;

    printf("Introduce 5 números enteros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }

    m = suma / 5;

    for (int i = 0; i < 5; i++) {
        float diferencia = numeros[i] - m;
        sumatoria += diferencia * diferencia;
    }

    return raiz_cuadrada(sumatoria / 5);
}

// Función para calcular la raíz cuadrada (Newton-Raphson)
float raiz_cuadrada(float numero) {
    float x = numero;
    float y = 1.0;
    float precision = 0.00001;

    if (numero < 0)
        return -1; // No se puede calcular raíz cuadrada de número negativo

    while (x - y > precision) {
        x = (x + y) / 2;
        y = numero / x;
    }

    return x;
}
