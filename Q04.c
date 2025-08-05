#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	float n1, n2, c;
	printf("|------------------------| \n");
	printf("|      CALCULADORA       | \n");
	printf("|------------------------| \n");
	printf("| 1 - Adição (+)         | \n");
	printf("|------------------------| \n");
	printf("| 2 - Subtração (-)      | \n");
	printf("|------------------------| \n");
	printf("| 3 - Multiplicação (x)  | \n");
	printf("|------------------------| \n");
	printf("| 4 - Divisão (:)        | \n");
	printf("|------------------------| \n");
	printf("");
	printf("Escolha uma das opções acima: \n");
	scanf("%d", &op);
	printf("Digite o primeiro número: \n");
	scanf("%f", &n1);
	printf("Digite o segundo número: \n");
	scanf("%f", &n2);
	switch(op){
		case 1:
			c = n1 + n2;
			printf("A adição entre %.1f e %.1f é: %.1f \n", n1, n2, c);
			break;
		case 2:
			c = n1 - n2;
			printf("A subtração entre %.1f e %.1f é: %.1f \n", n1, n2, c);
			break;
		case 3:
			c = n1 * n2;
			printf("A multiplicação entre %.1f e %.1f é: %.1f \n", n1, n2, c);
			break;
		case 4:
			if(n2 != 0){
				c = n1 / n2;
				printf("A divisão entre %.1f e %.1f é: %.1f \n", n1, n2, c);
			}
			else{
				printf("Divisão indefinida!");
			}
			break;
		default:
			printf("Opção inválida.\n");
	}
	return(0);	
}