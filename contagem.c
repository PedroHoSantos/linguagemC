#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digte o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Digte o segundo n�mero: ");
	scanf("%d", &num2);
	
	while(num1 <= num2){
		printf("%d \n", num1);
		num1 = num1 + 1;
	}
	
	system("PAUSE");
	return 0;
}

