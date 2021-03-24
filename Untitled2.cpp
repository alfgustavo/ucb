algoritmo Ex_2atividade;
// Síntese
//  Objetivo:  Calcular módulo de um número
//  Entrada :  Numero
//  Saída   :  Modulo


principal
	// Declarações
	real Numero;
	inteiro Modulo;
	// Instruções
	escreval("-----------------------------------------------------------");
	escreval("            Transformarei um número em módulo!             ");
	escreval("-----------------------------------------------------------");
	
	escreval("");
	
	escreva("> Escreva um valor númerico para transformar em módulo: ");
	leia(Numero);
	escreval("");
	
	se (Numero < 0) entao
		Modulo = Numero * (-1);
	senao
		Modulo = Numero;
	fimSe
	escreval("O módulo de: ",Numero," é |",Modulo,"|");
fimPrincipal
