#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número inteiro: \n");
	scanf("%d", &n);
	if(n == 0){
		printf("%d é neutro!", n);
	}
	else{
		if(n > 0){
			printf("%d é positivo!", n);
		}
		else{
			printf("%d é negativo!", n);
		}
	}
	return(0);	
}