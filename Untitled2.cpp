#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,valor[i],maior;
	
	printf("--------------------\n");
	printf("Maior valor digitado\n");
	printf("--------------------\n");
		for(i=0;i<3;i++){
			printf("Digite um valor: ");
				while(scanf("%d",&valor[i])!=1){
					printf("\n");
					printf("Digite apenas valores inteiros: ");
					while(getchar()!='\n');
				}
				maior = valor[i];
				if(valor[i]>maior){
					maior = valor[i];
				}
		}
	system("cls");	
		printf("Dentre todos os %d valores digitados o maior foi: %d",i,maior);
	return 0;
}
