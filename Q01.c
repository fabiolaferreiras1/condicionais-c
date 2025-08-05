#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int q;
	float d, n;
	printf("Qual a quantidade de maçãs que você deseja comprar? \n");
	scanf("%d", &q);
	if(q >= 12){
		d = 1.1 * q;
		printf("Você deverá pagar R$%.2f.", d);
	}
	else{
		n = 1.3 * q;
		printf("Você deverá pagar R$%.2f.", n);
	}
	return(0);	
}