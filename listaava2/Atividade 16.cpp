#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float altura1, altura2, altura3;
	char nome1[40], nome2[40], nome3[40];
	
	printf("Qual o nome da primeira pessoa?");
	scanf("%s", &nome1);
	
	printf("Qual a altura dela?");
	scanf("%f", &altura1);
	
	printf("Qual o nome da segunda pessoa?");
	scanf("%s", &nome1);
	
	printf("Qual a altura dela?");
	scanf("%f", &altura2);
	
	printf("Qual o nome da terceira pessoa?");
	scanf("%s", &nome1);
	
	printf("Qual a altura dela?");
	scanf("%f", &altura3);
	
	if((altura1 <= altura2) && (altura1 <= altura3))
		printf("O mais baixo é %s com %.2f de altura", nome1, altura1);
	 else if((altura2 <= altura1) && (altura2 <= altura3)) 
		printf("O mais baixo é %s com %.2f de altura", nome2, altura2);
	else if((altura3 <= altura1) && (altura3 <= altura2)) 
		printf("O mais baixo é %s com %.2f de altura", nome3, altura3);
 	
return 0;
}
