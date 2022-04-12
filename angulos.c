#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	int ang1, ang2, ang3;
	
	printf("Digite o valor do ângulo 1: ");
	scanf("%d", &ang1);
	printf("Digite o valor do ângulo 2: ");
	scanf("%d", &ang2);
	printf("Digite o valor do ângulo 3: ");
	scanf("%d", &ang3);
	
	if((ang1==90) || (ang2==90) || (ang3==90)){
	printf("O Triângulo é Retângulo \n");
	} else {
		if((ang1>90) || (ang2>90) || (ang3>90)){
		printf("O Triângulo é Obtusângulo \n");
		}else {
			if((ang1<90) && (ang2<90) && (ang3<90)){
			printf("O Triângulo é Acutângulo \n");
			}
		}
	}
	system("PAUSE");
	return 0;
}
