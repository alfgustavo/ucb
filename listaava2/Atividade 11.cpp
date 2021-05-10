//Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma
//figura geométrica onde cada lado é menor do que a soma dos outros dois lados).

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	
	printf("Digite o valor do lado A: ");
	scanf("%f", &a);
	
	printf("Digite o valor do lado B: ");
	scanf("%f", &b);
	
	printf("Digite o valor do lado C: ");
	scanf("%f", &c);

	if((a == b) && (a == c) && (b == c)){
		printf("Triângulo equilátero");	
	} else if((a != b) && (a != c) && (b != c)) {
		printf("Triângulo escaleno");
	} else {
	 printf("Triângulo isósceles");		
	}

return 0;
}
	
	
	
	
	
	
	



