#include <stdio.h>
#include <stdlib.h>

#define CON1 20
#define CON2 99.5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int valor, valor2, resultado;
	float soma;
	char nome[50];

	printf("Digite seu nome ");
	scanf("%s", nome);
	
	printf("Digite um valor ");
	scanf("%i", &valor);
	
	printf("Digite outro valor ");
	scanf("%i", &valor2);
	
	resultado = valor + valor2;
	
	printf("\a\t Muito bem %s ", nome);
	printf("\nA soma destes valores e %i ", resultado);
	
	soma = resultado + CON1 + CON2;
	
	printf("\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	
	printf("\nE a soma dos valores %i + %i + %.1f = %.1f", resultado, CON1, CON2, soma);

	return 0;

}
