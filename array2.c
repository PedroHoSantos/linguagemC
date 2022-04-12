#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	
	int i;
	float notas[5] = {7, 8, 10, 9.5, 9.9};
	//declaração
	
	printf("Exibir os valores do array \n\n");
	for(i=0; i<=4; i=i+1){
		printf("notas[%d] = %.2f \n", i, notas[i]);
	}
	
	system("PAUSE");
}
