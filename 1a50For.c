#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");

	int contador;
	
	contador = 1;
	
	for(contador=1; contador<=50; contador = contador+1){
		printf("%d \n", contador);
	}
}
