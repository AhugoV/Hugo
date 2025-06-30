#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Prototipos de funciones
void inicializar(int matriz[5][5]);

int main() {
    int m [5][5];
    srand(time(NULL));
    inicializar(m);
    for(int i = 0; i<5; i++ ) {
        
        for(int j = 0; j<5; j++) {
            
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void inicializar(int matriz[5][5]) {
    
    for(int i = 0; i<5; i++) {
        
        for(int j = 0; j<5; j++) {
            
            matriz[i][j] = rand() % 13 + 3;
            
        }
        
    }
    
    
}
