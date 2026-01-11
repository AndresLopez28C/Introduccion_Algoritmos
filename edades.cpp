#include <iostream>
using namespace std;
void comparacion(int,int,int);
int main(){
	int edad1,edad2,edad3 = 0;
	cout<<"Escriba la edad de maria "<<endl;
	cin>>edad1;
	cout<<"Escriba la edad de Ana "<<endl;
	cin>>edad2;
	cout<<"Escriba la edad de Jose "<<endl;
	cin>>edad3;
	comparacion(edad1,edad2,edad3);
	
	
	
	return 0;
}

void comparacion(int x, int y, int z){
	if (x==y && y==z)
	{
		cout<<"Todos son contemporaneos "<<endl;
	}
	else{
		if(x==y && y!=z){
			cout<<"Solo Maria y Ana son contemporaneos"<<endl;
		}
		else if(x==z && z!= y)
		{
			cout<<"Solo Maria y Jose son contemporaneos"<<endl;
		}
		else if(y==z && z!=x)
		{
			cout<<"Solo Ana y Jose son contemporaneos"<<endl;
		}
		else
		{
			cout<<"Ninguno es contemporaneo con otro"<<endl;
		}
	}
	
}
