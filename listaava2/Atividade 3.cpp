#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Valor de a: ");
	scanf("%f", &a);
	printf("Valor de b: ");
	scanf("%f", &b);
	printf("Valor de c: ");
	scanf("%f", &c);
	
	if ((a < b+c) && (b < a+c) && (c < b+a)) {
		printf("É possível construir um triângulo");
	} else {
		printf("Não é possível construir um triângulo");
	}
return 0;
}
