#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	int ang1, ang2, ang3;
	
	printf("Digite o valor do �ngulo 1: ");
	scanf("%d", &ang1);
	printf("Digite o valor do �ngulo 2: ");
	scanf("%d", &ang2);
	printf("Digite o valor do �ngulo 3: ");
	scanf("%d", &ang3);
	
	if((ang1==90) || (ang2==90) || (ang3==90)){
	printf("O Tri�ngulo � Ret�ngulo \n");
	} else {
		if((ang1>90) || (ang2>90) || (ang3>90)){
		printf("O Tri�ngulo � Obtus�ngulo \n");
		}else {
			if((ang1<90) && (ang2<90) && (ang3<90)){
			printf("O Tri�ngulo � Acut�ngulo \n");
			}
		}
	}
	system("PAUSE");
	return 0;
}
