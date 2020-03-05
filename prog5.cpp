#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float km,l,consumo;
		printf("Quilometragem percorrida:\n");
		scanf("%f",&km);
		printf("Quantos Litros foi abastecido:\n");
		scanf("%f",&l);
			consumo = km/l;
		printf("Consumo do carro foi de: =%0.1f km/l \n", consumo);
		system ("pause");
}
