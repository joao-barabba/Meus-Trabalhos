#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float v,q,t,consumo;
		printf("Valor do Maço:\n");
		scanf("%f",&v);
		printf("Quantidade de maço:\n");
		scanf("%f",&q);
		printf("Quantos anos que voce fuma?\n");
		scanf("%f",&t);
			consumo = (v*q*t*365);
		printf("Seu gasto com cigarro foi de: =%0.1f reais \n", consumo);
		system ("pause");
}
