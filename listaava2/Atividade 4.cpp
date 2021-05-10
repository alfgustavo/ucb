#include<stdio.h>
#include<locale.h>

int main() 
{ setlocale(LC_ALL, "Portuguese");
	
	char nome[40], sexo;
		
	printf("Qual seu nome?");
	fgets(nome, 40, stdin);

	while((sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f')){
		printf("Qual o seu sexo? ");
		scanf("%1s", &sexo);
	}
	if((sexo == 'M') || (sexo == 'm')){	
		printf("Olá, Ilmo. Sr. %s\n", nome);
	} else {
		printf("Olá, Ilma. Sra. %s\n", nome);
	}
return 0;
}		
