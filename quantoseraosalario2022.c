#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main (){
	int cont, ano;
	double salario=1212.0, porcentagem=0.015;
	
	printf("Digite o ano, a partir de 2022 que deseja saber o valor do salario: ");
	scanf("%d", &ano);
	while ((ano<2022)||(ano>2027))
	{
		printf("Erro!! Digite o ano, entre 2022 e 2027");
		scanf ("%d", &ano);
	}
	cont=ano-2022;
	while (cont>=1)
	{
		porcentagem=porcentagem*2;
		salario+=(salario*porcentagem);
		printf("\n\nO salario do ano de %d sera: R$%.2f", ano, salario);
		getch();
	}
}
