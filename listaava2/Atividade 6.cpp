#include<stdio.h>
#include<locale.h>

int main() 
{ setlocale(LC_ALL, "Portuguese");

int numero;	
	
	printf("Qual o número? ");
	scanf("%i", &numero);
		
if(numero%2 == 0)
	printf("Par");
else
	printf("Ímpar");
	
return 0;		
}
