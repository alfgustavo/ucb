#include<stdio.h>
#include<locale.h>

int main(){
	
	int valor1,valor2,valor3;
	
	printf("----------\n");
	printf("Analizador\n");
	printf("----------\n");
	
	
		printf("digite o primeiro valor: ");
			scanf("%d",&valor1);
		printf("digite o segundo valor: ");
			scanf("%d",&valor2);
		printf("Digite o terceiro valor: ");
			scanf("%d",&valor3);
			
		printf("\n");	
			
	if(valor1>valor2 && valor1 >valor3 && valor2>valor3){
		printf("Ordem crescente\n%d, %d, %d",valor3,valor2,valor1);
	}
	else if(valor1>valor2 && valor1 >valor3 && valor3>valor2){
		printf("Ordem crescente\n%d, %d, %d",valor2,valor3,valor1);
	}
	else if(valor2>valor1 && valor2>valor3 && valor1>valor3){
		printf("Ordem crescente\n%d, %d, %d",valor3,valor1,valor2);
	}
	else if(valor2>valor1 && valor2>valor3 && valor3>valor1){
		printf("Ordem crescente\n%d, %d, %d",valor1,valor3,valor2);
	}
	else if(valor3>valor1 && valor3>valor2 && valor1>valor2){
		printf("Ordem crescente\n%d, %d, %d",valor2,valor1,valor3);
	}
	else if(valor3>valor1 && valor3>valor2 && valor2>valor1){
			printf("Ordem crescente\n%d, %d, %d",valor1,valor2,valor3);
	}
	
	return 0;
}
