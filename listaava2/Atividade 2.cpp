#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
int numero;
	
printf("Qual o valor do número? ");
scanf("%d", &numero);
	
printf("O módulo é: %d", (abs(numero)));
	
return 0;
}

