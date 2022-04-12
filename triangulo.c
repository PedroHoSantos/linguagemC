#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int valora, valorb, valorc;
	printf("Entre com o valor de a: ");
	scanf("%d", &valora);
	printf("Entre com o valor de b: ");
	scanf("%d", &valorb);
	printf("Entre com o valor de c: ");
	scanf("%d", &valorc);
	
	if ((valora == valorb) && (valora == valorc) ){
		printf("Triangulo equilátero");
	} else {
		if ((valora == valorb) || (valora == valorc) || (valorb == valorc)){
			printf("Triangulo isósceles");
		}else{
			printf("Triangulo escaleno");
		}
	}
	
		system("pause");
}
