#include <stdio.h>
int xyz (int x, int y, int z){
    z = (y*10) + (x*600);
    return z;

}

int main(){

    int tiempoh;
    int tiempom;
    int total;
    tiempoh=0;
    tiempom=0;
    total=5;
    printf("Escriba cuantas horas a usado el parqueadero \n");
    scanf("%d",&tiempoh);
    printf("Escriba cuantos minutos a usado el parqueadero \n");
    scanf("%d",&tiempom);
    total = xyz(tiempoh, tiempom,total);
    printf("Debe pagar un total de %d\n ", total);
    
    return 0;
    
}

//En este codigo se recibe los valores decimales de 2 enteros que son horas y minutos, y simplemente se calcula el valor del parqueadero, C


