#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nota1=0;
	int nota2=0;
	int nota3=0;
	int r=0;
	
	printf("Digite a primeira nota: " );
	scanf("%i", &nota1);
	
	printf("Digite a segunda nota: " );
	scanf("%i", &nota2);
	
	printf("Digite a terceira nota: " );
	scanf("%i", &nota3);
	
	r= (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6;
	
	printf("Sua media ponderada e: %i \n", r);
	
	system("pause");
	
	return 0;
}
