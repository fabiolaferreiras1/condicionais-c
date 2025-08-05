#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, mp, af, mf;
	printf("Informe a sua primeira nota: \n");
	scanf("%f", &n1);
	printf("Informe a sua segunda nota: \n");
	scanf("%f", &n2);
	printf("Informe a sua terceira nota: \n");
	scanf("%f", &n3);
	mp = (n1 + n2 + n3) / 3;
	if(mp >= 3.5 && mp < 7.0){
		printf("Você será submetido a uma avaliação final, pois sua média foi %.1f. \n", mp);
		printf("");
		printf("Qual a sua nota na avaliação final? \n");
		scanf("%f", &af);
		mf = ((6 * mp) + (4 * af)) / 10;
		if(mf < 7.0){
			printf("Você foi reprovado, pois sua média final foi: %.1f. \n", mf);
		}
		else{
			printf("Você foi aprovado! Sua média final foi %.1f. \n", mf);
		}
	}
	else{
		if(mp < 3.5){
			printf("Você foi reprovado, pois sua média parcial foi %.1f!", mp);
		}
		else{
			printf("Você foi aprovado! Sua média parcial foi %.1f.", mp);
		}
	}
	return(0);	
}