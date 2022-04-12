#include<stdio.h>
#include<locale.h>

main(){
	system("color F0");
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	num = 0;
	
	while (num < 100){
	num = num +1;
		if (num % 2 != 0){
		printf("%d \n", num);
		}
	}
	system("PAUSE");
	return 0;
}
