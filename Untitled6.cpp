#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	int opcao;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Olá, seja muito bem vindo(a)\nao selecionador de Regiões\n");
	printf("Aqui você poderá escolher qual região do país você pretende visitar\n");
	printf("\n");
		printf("=====================\n");
		printf("    Menu de Opções   \n");
		printf("=====================\n");
			printf("[1] Norte\n");
			printf("[2] Nordeste\n");
			printf("[3] Centro-Oeste\n");
			printf("[4] Sudeste\n");
			printf("[5] Sul\n");
			printf("[0] Sair do seletor\n");
				printf("Digite a opção desejada: ");
					while(scanf("%d",&opcao)!=1){
						while(getchar()!='\n');
					}
		switch(opcao){
			case 1:
				system("cls");
				printf("A REGIÃO ESCOLHIDA FOI A REGIÃO NORTE!\n");
				printf("TENHA UMA BOA VIAJEM!");
			break;
			case 2:
				system("cls");
				printf("A REGIÃO ESCOLHIDA FOI A REGIÃO NORDESTE!\n");
				printf("TENHA UMA BOA VIAJEM!");
			break;
			case 3:
				system("cls");
				printf("A REGIÃO ESCOLHIDA FOI A REGIÃO CENTRO-OESTE!\n");
				printf("TENHA UMA BOA VIAJEM!");
			break;
			case 4:
				system("cls");
				printf("A REGIÃO ESCOLHIDA FOI A REGIÃO SUDESTE!\n");
				printf("TENHA UMA BOA VIAJEM!");
			break;
			case 5:
				system("cls");
				printf("A REGIÃO ESCOLHIDA FOI A REGIÃO SUL!\n");
				printf("TENHA UMA BOA VIAJEM!");
			break;
			case 0:
				system("cls");
				printf("APARENTEMENTE VOCÊ NÃO ESCOLHEU NENHUMA REGIÃO\n");
				printf("CONSIDERE REFAZER O TESTE CASE TENHA DIGITADO ERRADO\n");
				printf("CASO CONTRÁRIO, FICAMOS AGRADECIDOS POR TER URILIZADO O NOSSO SISTEMA\n");
				return 0;
			break;
		}
	return 0;
}
