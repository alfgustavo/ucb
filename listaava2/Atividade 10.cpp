algoritmo menorNumero


principal

	real a, b, c;
	
	escreval("Primeiro numero: ");
	leia(a);
	
	escreval("Segundo numero: ");
	leia(b);

	escreval("Terceiro numero: ");
	leia(c);

	se((a < b)) E ((a < c))entao 
	escreval("O menor valor sera: ", a);
	
	se((b < a)) E ((b < c))entao
	escreval("O menor valor sera: ", b);

	se((c < a)) E ((c < b))entao 
	escreval("O menor valor sera: ", c);
	
fimPrincipal
