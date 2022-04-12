#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	
	int macas;
	float total;
	
	printf("Quantas maçãs você deseja comprar? \n");
	scanf("%d", &macas);
	system("cls");
	if(macas<12){
		total= 0.30*macas;
		printf("Ao total, sua compra deu %.2f R$ \n", total);
	}
	else{
		total=0.25*macas;
		printf("Ao total, sua compra deu %.2f R$ \n", total);
	}
}
