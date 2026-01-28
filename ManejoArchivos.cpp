#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
	ofstream escribir; //creamos el archivo
	ifstream lectura; //leemos el archivo
	string texto;
	int opcion=0;
	cout<<"En este programa vamos a crear, leer, editar y borrar un archivo si es necesario"<<endl;
	cout<<"Escoge una opcion"<<endl;
	cout<<" 1 Crear un archivo"<<endl;
	cout<<" 2 Leer un archivo "<< endl;
	cout<<" 3 modificar un archivo "<<endl;
	cout<<" 4 borrar un archivo "<< endl;
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			escribir.open("Archivo.txt");
			if(escribir.is_open()){
				cout<<"Escribe un mensaje para el archivo recien creado! "<<endl;
				cin>>texto;
				escribir<<texto;
				cout<<"Archivo creado!"<<endl;
			}
			escribir.close();
			break;
		case 2:
			lectura.open("Archivo.txt", ios::in);
			while(!lectura.eof()){
				getline(lectura,texto);
				cout<<texto<<endl;
			}
			lectura.close();
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			cout<<"Por favor escoge una opcion valida"<<endl;
			break;
	}
	
	return 0;
}
