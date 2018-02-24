#include <stdio.h>
#include <stdlib.h>

void trocanumero(int* a, int* b);



int main(){

	int primeironumero, segundonumero;

	printf("Digite um numero: ");
	scanf("%d", &primeironumero);
	
    printf("Digite um outro numero: ");
	scanf("%d", &segundonumero);

	trocanumero(&primeironumero, &segundonumero);
	printf("Os numeros são %d, %d", primeironumero, segundonumero);

    return 0;

}


void trocanumero(int *a, int *b){
	
    int aux;

	aux = *b;
	*b = *a;
	*a = aux;

}
