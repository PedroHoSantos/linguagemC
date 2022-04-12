#include<stdio.h>
#include<locale.h>

maiorque(int valora, int valorb){
	if(valora>valorb){
		printf("O primeiro valor é maior. \n");
	}else{
		printf("O segundo valor é maior. \n");
	}
}

main(){
	int valor1, valor2;
	
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	printf("Digite o primeiro valor: \n");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: \n");
	scanf("%d", &valor2);
	maiorque(valor1, valor2);

	system("PAUSE");
}
