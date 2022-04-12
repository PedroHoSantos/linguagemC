#include<stdio.h>
#include<locale.h>

forma(int valora, int valorb){
	if(valora==valorb){
		printf("Quadrado \n");
	}else{
		printf("Retângulo \n");
	}
}

main(){
	int valor1, valor2;
	
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	printf("Base: \n");
	scanf("%d", &valor1);
	printf("Altura: \n");
	scanf("%d", &valor2);
	forma(valor1, valor2);

	system("PAUSE");
}
