#include <iostream>
using namespace std;
void masalto(int, int, int);
int main()
{
	int a,b,c =0;
	int valor=0;
	cout<<"Escriba un numero de 3 cifras"<<endl;
	cin>>valor;
	c = valor % 10; //365 -> 5 
	b = ((valor %100) - c)/10; //-> 6
	a = (valor - (b*10) - c)/100;
	masalto(a,b,c);
	return 0;
}

void masalto(int a, int b, int c)
{
	if(a>b && a>c)
	{
		if(b>c){
			cout<<"El mayor numero posible es "<<a<<b<<c;
		}
		else{
			cout<<"El mayor numero posible es "<<a<<c<<b;
		}
	}
	else if(b>a &&b>c){
		if(a>c)
		{
			cout<<"El mayor numero posible es "<<b<<a<<c;
		}
		else{
			cout<<"El mayor numero posible es "<<b<<c<<a;
		}
	}
	else if(c>a && c>b){
		if(a>b){
			cout<<"El mayor numero posible es "<<c<<a<<b;
		}
		else{
			cout<<"El mayor numero posible es "<<c<<b<<a;
		}
	}
	else
	{
		cout<<"Los numeros son iguales"<<endl;
	}
}
