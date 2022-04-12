#include<stdio.h>
#include<locale.h>

triangulo(int lado1, int lado2, int lado3){
	if((lado1 == lado2) && (lado1 == lado3)){
		printf("Equilátero \n");
	} else if((lado1 != lado2) && (lado1 == lado3)){
		printf("Escaleno \n");
		}else{
			printf("Isóceles \n");
		}
	}

main(){
	int valor1, valor2, valor3;
	
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	printf("Lado 1 \n");
	scanf("%d", &valor1);
	printf("Lado 2 \n");
	scanf("%d", &valor2);
	printf("Lado 3 \n");
	scanf("%d", &valor3);
	triangulo
	(valor1, valor2, valor3);

	system("PAUSE");
}
