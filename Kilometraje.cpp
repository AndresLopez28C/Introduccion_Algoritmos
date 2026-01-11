#include <iostream>
using namespace std;
int kilometraje (int);
int main(){
	int km =0;
	cout<<"Escriba cuantos kilometros ha recorrido en su vehiculo"<<endl;
	cin>>km;
	int total = kilometraje(km);
	cout<<"Precio a pagar : "<<total<<endl;
	return 0;
}

int kilometraje(int km){
	int total=0;
	if(km<300){
		total=200000;
	}
	else
	{
		total = 200000 + ((km-300)*14000);
	}
		
	return total;
}
