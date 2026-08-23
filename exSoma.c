#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	printf("Resultado: %d", a+b);
	
	
	return 0;
}
