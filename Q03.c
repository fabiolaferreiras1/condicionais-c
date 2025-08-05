#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, d;
	printf("Digite um número para o numerador: \n");
	scanf("%d", &n);
	printf("Digite um número para o denominador: \n");
	scanf("%d", &d);
	if(d == 0){
		printf("Divisão indefinida!");
	}
	else{
		if(n % d == 0){
			printf("É divisível!");
		}
		else{
			printf("Não é divisível!");
		}
	}
	return(0);	
}