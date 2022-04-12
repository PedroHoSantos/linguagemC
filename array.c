#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	
	float notas[5] = {7, 8, 10, 9.5, 9.9};
	//declaração
	
	printf("Exibir os valores do array \n\n");
	printf("notas[0] = %.2f \n", notas[0]);
	printf("notas[1] = %.2f \n", notas[1]);
	printf("notas[2] = %.2f \n", notas[2]);
	printf("notas[3] = %.2f \n", notas[3]);
	printf("notas[4] = %.2f \n", notas[4]);
	
	
	system("PAUSE");
}
