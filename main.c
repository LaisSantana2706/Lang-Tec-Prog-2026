#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// prova esoft MA ex0
	    int num1, num2, num3, num4;
 
    printf("Digite o primeiro numero inteiro: "); 
    scanf("%d", &amp;num1); 

    printf("Digite o segundo numero inteiro: "); 
    scanf("%d", &amp;num2); 

    printf("Digite o terceiro numero inteiro: "); 
    scanf("%d", &amp;num3); 

    printf("Digite o quarto numero inteiro: "); 
    scanf("%d", &amp;num4); 

    if (num1 % 2 != 0 &amp;&amp; num1 % 5 == 0)
     {
     printf("%d e impar e multiplo de 5.\\n", num1); 
    } 
    if (num2 % 2 != 0 &amp;&amp; num2 % 5 == 0)
    { 
    printf("%d e impar e multiplo de 5.\\n", num2);
    }
     if (num3 % 2 != 0 &amp;&amp; num3 % 5 == 0)
     { 
    printf("%d e impar e multiplo de 5.\\n", num3);
     } 
    if (num4 % 2 != 0 &amp;&amp; num4 % 5 == 0)
     { printf("%d e impar e multiplo de 5.\\n", num4); 
    }

	// prova esoft MA ex1
	int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
    
    //prova esoft MA ex03
    
    float valor, resultado; int codigo; 
    printf("Digite o valor a ser convertido: "); 
    scanf("%f", &valor); 
    printf("Digite o codigo da unidade/conversao: "); 
    scanf("%d", &codigo); 
    switch (codigo) { 
    case 1: 
    resultado = valor * 1.8 + 32; 
    printf("Resultado: %.2f F\n", resultado); 
    break; 
    case 2: 
    resultado = (valor - 32) / 1.8; 
    printf("Resultado: %.2f C\n", resultado); 
    break;
	 case 3: 
	 resultado = valor - 273.15; 
    printf("Resultado: %.2f C\n", resultado); 
    break; 
    case 4: 
	    printf("Resultado: %.4f mi\n", resultado); 
    break; 
    case 5: resultado = valor * 1609.34;
    printf("Resultado: %.2f m\n", resultado); 
    break; 
    case 8: 
	resultado = valor * 2.205; 
    printf("Resultado: %.2f lb\n", resultado);
     break; 
    case 9: 
	resultado = valor / 2.205; 
    printf("Resultado: %.2f kg\n", resultado); 
    break; 
    case 10: 
	resultado = valor / 1.609; 
    printf("Resultado: %.2f mph\n", resultado); 
    break; 
    case 11: 
	resultado = valor * 1.609; 
    printf("Resultado: %.2f km/h\n", resultado); 
    break; 
    default: 
    printf("Erro: Codigo de unidade invalido ou inexistente no sistema.\n");
     break; 
}

    
    //prova adsis ex0
	int num1, num2, num3, num4, num5; 
	
    printf("Digite os 5 numeros inteiros separados por espaco: "); 
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	 
    printf("\n--- Numeros em ordem consecutiva ---\n"); 
    
    if (num2 == num1 + 1 || num2 == num1 - 1) 
    { printf("%d e %d sao consecutivos.\n", num1, num2);
    
     } if (num3 == num2 + 1 || num3 == num2 - 1)
     { printf("%d e %d sao consecutivos.\n", num2, num3); 
     
    } if (num4 == num3 + 1 || num4 == num3 - 1) 
    { printf("%d e %d sao consecutivos.\n", num3, num4);
	 
    } if (num5 == num4 + 1 || num5 == num4 - 1) 
    { printf("%d e %d sao consecutivos.\n", num4, num5); 
}
   //prova adsis ex1
	float peso, altura, imc; 
    printf("Digite o peso em kg: "); 
    scanf("%f", &peso); 
    printf("Digite a altura em metros: "); 
    scanf("%f", &altura); 
    
    imc = peso / (altura * altura);
	 
    printf("\nIMC calculado: %.2f\n", imc); 
    if (imc < 18.5) { printf("Classificacao: Abaixo do peso\n"); 
    } else if (imc <= 24.9)
     { printf("Classificacao: Normal\n"); 
    } else if (imc <= 29.9) { printf("Classificacao: Acima do peso\n");
     } else 
    { printf("Classificacao: Obeso\n"); 
    }
    
    //prova adsis ex2
    // Inicialização dos pinos: A = 6 (1+2+3), B = 0, C = 0 
    int A = 6; 
    int B = 0; 
    int C = 0; 

    printf("Estado Inicial:\n"); 
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n\n", A, B, C); 

    // Passo 1: Mover disco 1 de A para C 
    A -= 1; 
    C += 1; 
    printf("Passo 1 (Mover disco 1 de A para C):\n"); 
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n\n", A, B, C); 
    // Passo 2: Mover disco 2 de A para B 
    A -= 2; 
    B += 2; 
    printf("Passo 2 (Mover disco 2 de A para B):\n"); 
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n\n", A, B, C); 
    // Passo 3: Mover disco 1 de C para B 
    C -= 1; 
    B += 1; 
    printf("Passo 3 (Mover disco 1 de C para B):\n");
     printf("Pino A: %d | Pino B: %d | Pino C: %d\n\n", A, B, C); 
    // Passo 4: Mover disco 3 de A para C 
    A -= 3; 
    C += 3; 
    printf("Passo 4 (Mover disco 3 de A para C):\n"); 
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n\n", A, B, C); 
    // Passo 5: Mover disco 1 de B para A 
    B -= 1; 
    A += 1; 
    printf("Passo 5 (Mover disco 1 de B para A):\n"); 
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n\n", A, B, C); 
    // Passo 6: Mover disco 2 de B para C 
    B -= 2; 
    C += 2; 
    printf("Passo 6 (Mover disco 2 de B para C):\n"); 
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n\n", A, B, C); 
    // Passo 7: Mover disco 1 de A para C
     A -= 1; 
    C += 1; 
    printf("Passo 7 (Mover disco 1 de A para C):\n"); 
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n", A, B, C);
    
    //prova esoft MB ex0
    int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
    
    //prova esof MB ex1
    int a, b, c; 
    printf("Digite tres numeros inteiros (a, b, c): "); 
    scanf("%d %d %d", &a, &b, &c); 
    if (a == b || a == c || b == c) {
     printf("os numeros tem que ser distintos\n"); 
    } 
    else { if (a < b && b < c) { 
    printf("%d %d %d\n", a, b, c);
     } else if (a < c && c < b) { 
    printf("%d %d %d\n", a, c, b); 
    } else if (b < a && a < c) { 
    printf("%d %d %d\n", b, a, c); 
    } else if (b < c && c < a) { 
    printf("%d %d %d\n", b, c, a); 
    } else if (c < a && a < b) { 
    printf("%d %d %d\n", c, a, b); 
    } else { 
    printf("%d %d %d\n", c, b, a);
     } 
    }
    
    //prova esof MB ex2
    float val1, val2; 
    int codigo; 
    printf("Digite o primeiro valor: "); 
    scanf("%f", &val1); 
    printf("Digite o segundo valor: "); 
    scanf("%f", &val2); 
    printf("Digite o codigo da operacao (1: >, 2: <, 3: ==, 4: !=): "); 
    scanf("%d", &codigo); 
    switch (codigo) { 
    case 1: if (val1 > val2) {
     printf("Verdadeiro\n"); 
    } else { printf("Falso\n");
     } 
    break; 
    case 2: if (val1 < val2) { 
    printf("Verdadeiro\n"); 
    } else { printf("Falso\n"); 
    } 
    break; 
    case 3: 
    if (val1 == val2) { 
    printf("Verdadeiro\n");
     } else { 
    printf("Falso\n"); 
    } 
    break; 
    case 4: 
    if (val1 != val2) {
     printf("Verdadeiro\n"); 
    } else { printf("Falso\n"); 
    } 
    break; 
    default: 
    printf("operador invalido\n"); 
    break; 
    }




	return 0;
}
