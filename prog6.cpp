#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float v,q,t,consumo;
		printf("Valor do Ma�o:\n");
		scanf("%f",&v);
		printf("Quantidade de ma�o:\n");
		scanf("%f",&q);
		printf("Quantos anos que voce fuma?\n");
		scanf("%f",&t);
			consumo = (v*q*t*365);
		printf("Seu gasto com cigarro foi de: =%0.1f reais \n", consumo);
		system ("pause");
}
