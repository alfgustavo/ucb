#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float anoNascimento, anoAtual, idade, numeroDeDias;
	
	printf("Em que ano você nasceu? ");
	scanf("%f", &anoNascimento);
	
	printf("Qual o ano atual? ");
	scanf("%f", &anoAtual);
	
	idade = anoAtual - anoNascimento;
	numeroDeDias = idade * 365;
	
	printf("Você já viveu %.0f dias!", numeroDeDias);
	
return 0;	
}
