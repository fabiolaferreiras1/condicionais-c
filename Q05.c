#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op, q;
	float v;
	printf("|----------------------------------------------------------| \n");
	printf("|                    LANCHONETE COMA BEM                   | \n");
	printf("|----------------------------------------------------------| \n");
	printf("|                         CARDÁPIO                         | \n");
	printf("|----------------------------------------------------------| \n");
	printf("|  CÓDIGO DO ITEM  |    ESPECIFICAÇÃO    |  PREÇO UNITÁRIO | \n");
	printf("|----------------------------------------------------------| \n");
	printf("|       100        |   Cachorro-quente   |     R$10,00     | \n");
	printf("|----------------------------------------------------------| \n");
	printf("|       101        |        Bauru        |     R$12,00     | \n");
	printf("|----------------------------------------------------------| \n");
	printf("|       102        |      X - Salada     |     R$15,00     | \n");
	printf("|----------------------------------------------------------| \n");
	printf("|       103        |      Hambúrguer     |     R$18,00     | \n");
	printf("|----------------------------------------------------------| \n");
	printf("|       104        | Refrigerante (lata) |      R$5,00     | \n");
	printf("|----------------------------------------------------------| \n");
	printf("");
	printf("Digite o código do item que você deseja: \n");
	scanf("%d", &op);
	switch(op){
		case 100:
			printf("Quantos cachorros-quentes você deseja? \n");
			scanf("%d", &q);
			v = q * 10.00;
			printf("O valor a ser pago é: R$%.2f.", v);
			break;
		case 101:
			printf("Quantos baurus você deseja? \n");
			scanf("%d", &q);
			v = q * 12.00;
			printf("O valor a ser pago é: R$%.2f.", v);
			break;
		case 102:
			printf("Quantos x-saladas você deseja? \n");
			scanf("%d", &q);
			v = q * 15.00;
			printf("O valor a ser pago é: R$%.2f.", v);
			break;
		case 103:
			printf("Quantos hambúrgueres você deseja? \n");
			scanf("%d", &q);
			v = q * 18.00;
			printf("O valor a ser pago é: R$%.2f.", v);
			break;
		case 104:
			printf("Quantos refrigerantes de lata você deseja? \n");
			scanf("%d", &q);
			v = q * 5.00;
			printf("O valor a ser pago é: R$%.2f.", v);
			break;
		default:
			printf("Opção inválida!");
	}
	return(0);	
}