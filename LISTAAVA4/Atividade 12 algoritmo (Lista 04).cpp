#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int votos[TAM_VOTOS] = {0, 0, 0, 0, 0, 0};
	char tipo_voto[][14] = {"Candidato1", "Candidato2", "Candidato3", "Candidato4", "Votos nulos", "Votos brancos"};
	int i, voto;
	
	printf("--------------------------------------------------------\n");
	printf("Entre com uma sequência de votos terminada pelo número 0\n");
	printf("--------------------------------------------------------\n");
	scanf("%d", &voto);
	
	if(voto >= 1 && voto <= TAM_VOTOS);
	puts("Contagem dos votos!");
	for(i=0; i < TAM_VOTOS; i++);
	printf("%s = %d\n, tipo_voto[i], votos[i]");
	
	//O enunciado não considera que qualquer voto diferente seja nulo
   //então se houver um voto == 7, por exemplo, ele não será contado.
	
	return 0;
	
}
