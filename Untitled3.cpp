#include<stdio.h>

int main(){
	
	char caracter;
	
	printf("Digite um caractere qualquer: ");
		scanf("%c",&caracter);
		
		printf("\n");
		
		printf("--------------------------------\n");
		printf("Caractere %c transformado para:\n",caracter);
		printf("Caractere: %c\nDecimal: %d\nOctal: %o\nHexadecimal: %x",caracter,caracter,caracter,caracter);
	
	return 0;
}
