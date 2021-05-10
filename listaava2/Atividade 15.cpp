#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");

	float horasUtilizadas, preco;
	int valorBasico = 30;
		
	printf("Horas utilizadas: ");
	scanf("%f", &horasUtilizadas);
		
	if(horasUtilizadas > 20) {
		preco = valorBasico + ((horasUtilizadas - 20) * 3);
	} else {
		preco = valorBasico;
	}
	
	printf("O senhor(a) terá que pagar R$ %.1f", preco);

return 0;
}
