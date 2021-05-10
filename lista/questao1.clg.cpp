algoritmo areaCirculo;
// Sintese
//  Objetivo: Construa um algoritmo que calcule a area de um circulo cujo raio  fornecido pelo usuario
// (use area = 3.14 * raio²
//  Entrada : raio
//  Saida   : resultado


principal
	// Declarações
    real raio, area;
	// Instrucoes
    // perguntar para o usuario o valor do raio
    escreva ("Digite o valor do raio: "); //apresentar texto na tela
    leia(raio); //receber o dado digitado na variavel raio
    //calcular a area
    area = 3.14 * raio * raio;
    //mostrar o resultado
    escreval ("");
    escreva (raio);
    escreval (" = raio");
    escreva (area);
    escreval (" = area");
fimPrincipal
