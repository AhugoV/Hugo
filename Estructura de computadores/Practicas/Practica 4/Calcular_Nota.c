#include <stdio.h>

void calcula_nota (int a);


int main () {
	
	printf("Introduce un numero:\n");
	
	int b;

	scanf("%d", &b);

	calcula_nota(b);
	return 0;
}

void calcula_nota (int a) {

	if (a<5) {

	printf ("Suspenso\n");
	}
	else if (a>5 && a<8){
	
	printf("Notable\n");
	}
	else if (a>8) {
	printf("Sobresaliente\n");
	}
}
