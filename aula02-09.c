#include <stdio.h>
#include <stdlib.h>

void exec2 (){
    // 	Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares
	
	float dola, real, cota;
	scanf("%f", &real);
	scanf("%f", &cota);
	printf("%f reais são %f dolinhos\n", real, (real/cota));
}

void exec3 (){
	float tempC, tempF;
	scanf("%f", &tempC);
	tempF = tempC *(9.0/5.0) + 32.0;
	printf("A temperatura maxima de hoje na tela da globo %f", tempF);
}

int exec8(){
	int segundos, horas, minutos;
	scanf("%d", &segundos);
	horas = segundos/3600;
	minutos = (segundos-(horas*3600))/60;
	segundos = segundos-((horas*3600)+(minutos*60));
	printf("Tempo %d:%d:%d", horas, minutos, segundos);
	return horas;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int resposta, retorno;
	printf("Usuario qual exercicio quer resolver ? |2|3|8|\n");
	scanf("%d", &resposta);
	
	switch (resposta){
	case 2:
		exec2();
    break;

    case 3:
	    exec3();	
	//Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit
	break;
	
	// (URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos
	case 8:
		retorno = exec8();
		printf("\t \t %d", retorno);
	break;
}
	
	return 0;
}
