#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	printf("insira o valor a ser convertido: ");
	scanf("%d" ,&n);// -> 41
	
	bit_64 = n%2;// -> 1
	res = n/2; // ->20
	
	bit_32 = res%2;// -> 0
	res = res/2; //-> 10
	
	bit_16 = res%2;// -> 0
	res = res/2;
	
	bit_8 = res%2; // -> 1
	res = res/2;
	
	bit_4 = res%2;
	res = res/2;
	
	bit_2 = res%2;
	res = res/2;
	
	printf("O numero %d em bin = %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
	
	return 0;
}
