#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10

void init(int v[n]);

int suma (int v[n]);

int main() {
    
    int v[n];
    srand(time(NULL));
    
    init(v);

    
    for (int i=0; i<10;i++){
        
    printf("%d \n", v[i]);
        
    }
    int a = suma (v);
    printf("La suma del vector es:%d \n", a);
    
}


void init(int v[n]) {
    
    for (int i = 0; i<10; i++) {
        
        v[i]= rand() % 11;
        
    }
    
    
}

int suma (int v[n]) {
    
    int cont = 0;
    
    for (int i = 0; i<10; i++) {
        
        cont = cont + v[i];
        
    }
    return cont;
    
}
