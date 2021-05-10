#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");

	int velocidade;
	char placa[8];

printf("Qual a velocidade em km/h?" );
scanf("%d", &velocidade);

printf("Qual a placa do veículo? ");
scanf("%s", &placa);

if (velocidade > 80){
	printf("Multado no Eixo Rodoviário");
} else { 
	printf("Não será multado no Eixo Rodoviário");
}	

return 0;

}


