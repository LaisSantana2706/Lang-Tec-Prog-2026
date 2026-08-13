#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Exercicio 1
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro Valor");
	scanf("%d", &primeiro);
	printf("Digite o primeiro Valor");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d", primeiro, segundo);
	
//Exercicio 2
	
	return 0;
}
