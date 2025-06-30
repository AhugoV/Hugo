#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
#define ALPHABET_SIZE 26

void inicializar_abecedario(char letras[]);

int main() {
    char letras[ALPHABET_SIZE];
    char password[PASSWORD_LENGTH + 1];
    
    inicializar_abecedario(letras); 
    
    srand(time(NULL));
    
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int randomIndex = rand() % ALPHABET_SIZE;
        password[i] = letras[randomIndex];
    }
    password[PASSWORD_LENGTH] = '\0';
    
    printf("Contraseña generada: %s\n", password);
    
    return 0;
}

void inicializar_abecedario(char letras[]) {
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        letras[i] = 'a' + i;
    }
}

