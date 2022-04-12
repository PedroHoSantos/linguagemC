#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	int valora, valorb, valorc;
	printf("Entre com o valor de a: ");
	scanf("%d", &valora);
	printf("Entre com o valor de b: ");
	scanf("%d", &valorb);
	printf("Entre com o valor de c: ");
	scanf("%d", &valorc);
	
	if ((valora > valorb) && (valorb > valorc)){
		printf("A sequência é: %d %d %d", valora, valorb, valorc);
	}	
	if ((valorb > valora) && (valora > valorc)){
		printf("A sequência é: %d %d %d", valorb, valora, valorc);
	}	
	if ((valorc > valora) && (valora > valorb)){
		printf("A sequência é: %d %d %d", valorc, valora, valorb);
	}	
	if ((valorc > valorb) && (valorb > valora)){
		printf("A sequência é: %d %d %d", valorc, valorb, valora);
	}	
	if ((valora > valorc) && (valorc > valorb)){
		printf("A sequência é: %d %d %d", valora, valorc, valorb);
	}	
	if ((valorb > valorc) && (valorc > valora)){
		printf("A sequência é: %d %d %d", valorb, valorc, valora);
	}
	
	
	system("PAUSE");
	return 0;
}
