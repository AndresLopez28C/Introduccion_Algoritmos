#include <stdio.h>
int main(){
	int a;
	int dato;
	a=0;
	dato=0;
	printf("Escriba un numero \n");
	scanf("%d", &a);
	dato = a%2;
	if (dato==0){
		if(a<0){
			printf("Usted ha escrito un numero par negativo");
		}
		else{
			printf("Usted ha escrito un numero par positivo");
		}
	}
	else{
		if(a<0){
			printf("Usted ha escrito un numero impar negativo");
		}
		else{
			printf("Usted ha escrito un numero impar positivo");
		}
	}
	getchar();
	return 0;
	}
