#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int v,c50,c20,c10;
		printf("Qual o valor deseja sacar?\n");
		scanf("%d",&v);
			c50=v/50;
			v=v%50;
			c20=v/20;
			v=v%20;
			c10=v/10;		
	
		printf("Quantidade de cedulas de 50: %d \n", c50);
		printf("Quantidade de cedulas de 20: %d\n", c20);
		printf("Quantidde de cedulas de 10: %d\n", c10);
		system ("pause");
}
