#include<stdio.h>
#include<locale.h>

int main()
{ setlocale(LC_ALL, "Portuguese");
// exercício 1	

	if ((velocidade > 80)) {
	printf("Multado no Eixo Rodoviário");
	} else {
	printf("Não será multado no Eixo Rodoviário");
	}

// exercício 3

	if ((a < b+c) && (b < a+c) && (c < b+a)) {
		printf("É possível construir um triângulo");
	} else {
		printf("Não é possível construir um triângulo");		
	}

return 0;		
}
