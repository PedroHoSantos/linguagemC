#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digte o primeiro número: ");
	scanf("%d", &num1);
	printf("Digte o segundo número: ");
	scanf("%d", &num2);
	
	for(num1>=num2)
