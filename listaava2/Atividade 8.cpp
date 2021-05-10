#include<stdio.h>
#include<locale.h>

int main() 
{ setlocale(LC_ALL, "Portuguese");

	char nome[40], sexo;
	float altura, peso;
		
	printf("Qual seu nome? ");
	fgets(nome, 40, stdin);
	printf("Qual a sua altura?");
	scanf("%f", &altura);
	
	while((sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f')){
		printf("Qual o seu sexo? ");
		scanf("%1s", &sexo);
	}
	if((sexo == 'M') || (sexo == 'm')){	
		printf("Ilmo. Sr. %s\n", nome);
		peso = (72.5 * altura) - 58;
		printf("Seu peso é: %.2fkg", peso);
	} else {
		printf("Ilma. Sra. %s\n", nome);
		peso = (62.1 * altura) - 44.7;
		printf("Seu peso é: %.2fkg", peso);
	}	
}



