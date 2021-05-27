#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	
	int cadeira=0,mesa=0,estante=0,estantecd=0,impressora=0;
	int quantidade,i,opcao;
	
	setlocale(LC_ALL,"Portuguese");
	
		printf("-----------\n");
		printf("UCB IMÓVEIS\n");
		printf("-----------\n");
			printf("Quantos imóveis deseja comprar ? ");
			while(scanf("%d",&quantidade)!=1){
				printf("Digite um valor inteiro: ");
			if(quantidade=0){
				printf("Nenhum imóvel comprado!\nObrigado\nVolte Sempre!");
				return 0;
			}
			while(getchar()!='\n');
			}
			
			printf("\n");
			
			for(i=0;i<quantidade;i++){
				
				printf("Opções de imóveis\n");
				printf("[1] Cadeira\n");
				printf("[2] Mesa de Computador\n");
				printf("[3] Estante de Livros\n");
				printf("[4] Mesa de Impressora\n");
				printf("[5] Estante de CD\n");
				printf("Faça sua esolha: ");
				scanf("%d",&opcao);
				
				printf("\n");
				
			if(opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4 && opcao!=5){	
				while(opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4 && opcao!=5){
					printf("Imóvel não encontrado!\n");
					scanf("%d",&opcao);
					fflush(stdin);
					printf("\n");
				}
			}
			
			switch(opcao){
				case 1:
					cadeira = cadeira + 1;
					break;
				case 2: 
					mesa = mesa + 1;
					break;
				case 3:
					estante = estante + 1;
					break;
				case 4:
					impressora = impressora + 1;
					break;
				case 5:
					estantecd = estantecd + 1;
					break;
			}
			
			}	
			
			printf("Móveis comprados\n");
			printf("Cadeiras: %d\nMesas de computador: %d\nEstante de livros: %d\nImpressoras: %d\nEstantes de CD'S %d\n",cadeira,mesa,estante,impressora,estantecd);

	return 0;
}
