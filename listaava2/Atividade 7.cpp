#include<stdio.h>
#include<locale.h>

int main()
{ setlocale(LC_ALL, "Portuguese");
	float a, b, diferenca;
	
	printf("Primeiro número: ");
	scanf("%f", &a);
	printf("Segundo número: ");
	scanf("%f", &b);
	
	if(a >= b) {
	diferenca = a - b;
	} else {
	diferenca = b - a;	
	}
	
	printf("A diferença entre os números %.1f e %.1f é de %.1f", a, b, diferenca);
	
	return 0;
}
