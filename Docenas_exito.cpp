#include <stdio.h>
#include <iostream>
using namespace std;
int docenas(int); 
float precio =1000;
int main(){
	int cantidad =0;
	int monto=0;
	cout<<"Cuantas docenas ha comprado"<<endl;
	cin>>monto;
	cantidad = docenas(monto);
	cout<<"El valor a pagar es: "<<cantidad<<endl;
	return 0;
}

int docenas(int monto){
	if(monto<=3){
		precio = (precio*monto) - (precio*0.11);
	}
	else{
		precio = (precio*monto) - (precio*0.17);
	}
	return precio;
}
