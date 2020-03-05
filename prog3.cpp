#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float n1,n2,n3,n4,media;
		printf("Primeira Nota:\n");
		scanf("%f",&n1);
		printf("Segunda Nota:\n");
		scanf("%f",&n2);
		printf("Terceira Nota:\n");
		scanf("%f",&n3);
		printf("Quarta Nota:\n");
		scanf("%f",&n4);
			media = (n1+n2+n3+n4)/4;
		printf("Nota Media =%0.1f  \n", media);
		system ("pause");
}
