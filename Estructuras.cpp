#include<iostream>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
persona1 = {"Alejandro",20},
persona2 = {"Ruperto",15};

struct Mascota{
	char nombre[20];
	int edad;
}mascota1;

int main(){
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl;
	
	cout<<"\nNombre2: "<<persona2.nombre<<endl;
	cout<<"Edad2: "<<persona2.edad<<endl;
	
	cout<<"\n\n Ingresa el nombre de la mascota: ";
	cin.getline(mascota1.nombre,20,'\n');
	cout<<"\n\n Ingresa su edad: ";
	cin>>mascota1.edad;
	
	cout<<"\n\n Imprime datos: \n";
	cout<<"Nombre: "<<mascota1.nombre<<endl;
	cout<<"Edad: "<<mascota1.edad<<endl;
	return 0;
}
