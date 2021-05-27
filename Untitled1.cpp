#include<stdio.h>

// Atividade 1 Lista 5

int main (){
	
	float resultado,valor=555,porcentagem;

	
	printf("----------------------\n");
	printf("Cálculo de Porcentagem\n");
	printf("----------------------\n");
	
		printf("Digite a pocentagem que deseja calcular: ");
			while(scanf("%f",&porcentagem)!=1){
				printf("Digite um valor entre 1 e 100: ");
				while(getchar()!='\n');
			}
			
		resultado = ((valor*porcentagem)/ 100);
		
		printf("\n");
		
	printf("%.1f%% porcento de 555 é igual a: %.2f",porcentagem,resultado);
		
	return 0;
}
