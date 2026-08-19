#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
// area do circulo	
    
    float raio, area, raioQuadrado;
	
	printf ("Inseira o valor de R: \n");
	scanf("%f", &raio);
	
	raioQuadrado = raio*raio;
	area = pi * raioQuadrado;
	
	printf ("A Area do circulo de raio %f = %f", raio, area);

// area do trap�zio descendente, brilll

    float areat, baseMaior, baseMenor, alt;
    
    printf ("Insira a base maior: \n");
    scanf ("%f", &baseMaior);
	
	printf ("Insira a base menor: \n");
	scanf ("%f", &baseMenor);
	
	printf ("Insira a altura: \n");
	scanf ("%f", &alt);
	
	areat = ((baseMaior+baseMenor)*alt)/2;
	
	printf ("Area do trapezio descedente igual a %f", areat); 
	
	return 0;
}
