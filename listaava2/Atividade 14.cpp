#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	float a, b, c;
	
	printf("Primeiro número: ");
	scanf("%f", &a);
	
	printf("Segundo número: ");
	scanf("%f", &b);

	printf("Terceiro número: ");
	scanf("%f", &c);

	if((a > b) && (a > c)) {
		printf("O maior valor será: %f", a);
	} else if((b > a) && (b > c)) {
		printf("O maior valor será: %f", b);
	} else if((c > a) && (c > b)){	 
		printf("O maior valor será: %f", c);
	}
return 0;
}

