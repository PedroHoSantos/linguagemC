#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	
	int i;
	float notas[5];
	
	printf("Exibir os valores do Array \n \n");
	for(i= 0; i<=4; i++){
		printf("Entre com a nota notas[%d]: ", i);
		scanf("%.2f", &notas[i]);
	}
	for(i=0; i<=4; i=i+1){
		printf("notas[%d] = %f \n", i, notas[i]);
	}
	system("PAUSE");
}
