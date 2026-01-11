#include <stdio.h>
#include<stdlib.h>

void Sinfunciones();

int main(){
	int opcion =0;
	printf("Escriba una opcion escoger un codigo \n");
	printf("1)Ejercicios sin funciones  \n2)Ejercicios con Funciones\n");
	scanf("%d", &opcion);
	switch (opcion){
		case 1:
			Sinfunciones();
			break;
	}
		
			
	
	return 0;
}

void Sinfunciones(){
	int opcion=0;
	system("cls");
	printf("Escriba una opcion escoger un codigo \n\n");
	printf("1)calcular costo parqueadero  \n2)Par o Impar positivos o negativos \n3)");
	scanf("%d", &opcion);
	system("cls");
	switch(opcion){
		case 1:
			system("\C_Parqueadero.exe");
			break;
	}
}
