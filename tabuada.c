#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	
	int num, tab, resultado;
	
	tab = 1;
	
	printf("Digite um número para saber sua tabuada: ");
	scanf("%d", &num);
	while(tab < 11){
		resultado = (num * tab);
		printf("%d * %d = %d \n", num, tab, resultado);
		tab = tab + 1;
	}
	
	system("PAUSE");
	return 0;
}
