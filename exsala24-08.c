#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	
	int a, b, c;
	int resultado;
	
	printf("Insira os valores de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c );
	
    	if (a>b){
		resultado = a;
	}else{
		resultado = b;
	}
	
     	if (c>resultado){
		resultado = c;
	}
	
	printf("%d eh o maior", resultado);
	
*/

   int n;
   int resultado;
   
   printf("Insira o valor: ");
   scanf("%d", &n );
   
   if (n>0){
   	resultado = n*-1;
   }else{
   	resultado = n*n;
   }
   
   printf("%d",resultado);
	
	return 0;
}
