#include<stdio.h>
#include<ctype.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	char sexo;
	
	printf("Escreva seu sexo: ");
	 	scanf("%c",&sexo);
	 	sexo = toupper(sexo);
	 	
	if(sexo!='F' && sexo!='M'){
		while(sexo!='F' && sexo!='M'){
			printf("Escreva seu sexo\nF ou M: ");
				fflush(stdin);
				scanf("%c",&sexo);
				sexo = toupper(sexo);
		}
	}
	
	printf("\n");
	
	if(sexo=='F'){
		printf("Seu sexo por escrito por extenso é: Feminino");
	}else if(sexo=='M'){
		printf("Seu sexo escrito por extenso é: Masculino");
	}
	
	return 0;
}
