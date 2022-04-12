#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	
	int senha;
	
	printf("Digite a sua senha: ");
	scanf("%d", &senha);
	system("cls");
	if(senha==1234){
		printf("ACESSO PERMITIDO \n");
	}
	else{
		printf("ACESSO NEGADO \n");
	}
	
	system("PAUSE");
	return 0;
}
