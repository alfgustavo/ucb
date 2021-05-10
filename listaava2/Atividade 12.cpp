algoritmo DDD
//Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual
//cidade pertence, considerando só os seguintes valores:

principal 

	inteiro DDD;

	escreval("Digite o DDD: ");
	leia(DDD);
	
	se((DDD == 61)) entao
		escreva("Brasília");
	se((DDD == 71)) entao
		escreva("Salvador");
	se((DDD == 11)) entao
		escreva("São Paulo");
	se((DDD == 21)) entao
		escreva("Rio de Janeiro");
	se((DDD == 32)) entao
		escreva("Juiz de Fora");
	se((DDD = 19)) entao
		escreva("Campinas");
	se((DDD = 27)) entao
		escreva("Vitória");	
	se((DDD = 31)) entao
		escreva("Belo Horizonte");
	senao
		escreva("Cidade sem identificação");
		
fimPrincipal
	
