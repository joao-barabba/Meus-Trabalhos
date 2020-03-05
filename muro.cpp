#include <stdio.h>
#include <locale.h>
#define AREA_BLOCOS 0.08
#define VALOR_BLOCO 2
#define MAO_OBRA 80	
int main(){
	setlocale(LC_ALL, "portuguese");
	float blocos, custo, altura, largura,area,custo_mo,total;
		printf("Digite em metros quadrado a altura do muro:\n");
		scanf("%f",&altura);
		printf("Digite em metros quadrado a largura do muro:\n");
		scanf("%f",&largura);
			area=altura*largura;
			blocos=area/AREA_BLOCOS;
			blocos=blocos*1.1;
			custo=blocos*VALOR_BLOCO;
			custo_mo=MAO_OBRA*area;
			total= custo_mo+custo;
					
		printf("Quantidade de Blocos.... é:    %0.0f\n",blocos);
		printf("Valor Gasto será de...... : R$ %0.1f\n",custo);
		printf("Valor da mão de obra é... : R$ %0.1f\n",custo_mo);
		printf("Valor Gasto Total........ : R$ %0.1f\n",total);
	
	
						
	
	 
}
