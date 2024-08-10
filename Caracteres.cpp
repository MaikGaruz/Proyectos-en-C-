#include <iostream>
#define cabecera "HOLAAAAAAAAAAAAAAAAAAAA"

using namespace std;

int main(){
	char a='m',b='i',c='g',d='u',e='e'; //para solo un caracter
	char car='c', car1='C';
	const float pi=3.1416;
	
	string f="garcia";
	cout<<cabecera<<"\n";
	
	cout<<a<<b<<c<<d<<e<<" "<<f;
	
	cout<<"\n\n";
	
	cout<<car<<" y "<<car1;
	
	car=car-32;
	car1=car1+32;
	
	cout<<"\n\n";
	
	cout<<car<<" y "<<car1;
	
	cout<<"\n\n";
	
	enum laborable {Lunes, Martes, Miercoles, Jueves, Viernes};//crea una lista, empieza desde 0
	
	
	return 0;
}
