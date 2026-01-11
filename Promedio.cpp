#include <iostream>
using namespace std;
void calcular(int,int,int,int);



int main()
{
	int nota1,nota2,nota3,nota4 =0;
	cout<<"Escriba la primera nota del estudiante"<<endl;
	cin>>nota1;
	cout<<"Escriba la segunda nota del estudiante"<<endl;
	cin>>nota2;
	cout<<"Escriba la tercera nota del estudiante"<<endl;
	cin>>nota3;
	cout<<"Escriba la cuarta nota del estudiante"<<endl;
	cin>>nota4;
	calcular(nota1,nota2,nota3,nota4);
	return 0;
}

void calcular(int x,int y, int z, int a)
{
	float promedio = 0;
	//Cual nota es la menor primero
	if (x<y && x<<z && x<a )
	{
		promedio = (y+z+a)/3;
	}
	else if(y<x && y<z && y<a){
		promedio = (x+z+a)/3;
	}
	else if (z<x && z<y && z<a){
		promedio = (x+y+a)/3;
	}
	else if(a<x && a<y && a<z)
	{
		promedio = (x+y+z)/3;
	}
	else
	{
		promedio = (x+y+z+a)/4;
	}
	cout<<endl<<"El promedio del estudiante es: "<<promedio<<endl;
}
