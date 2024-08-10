#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(){
	char nombre[20], x[10]="perro", y[10]="gato", vacio[40], num[]="123";
	int longitud=0, numero;
	
	cout<<"\n\n Introduce tu nombre: ";
	cin.getline(nombre,20,'\n');	//GUARDA UNA CADENA DE CARACTERES EN UN LIMITE DEDINIDO Y SE ACABA CUANDO SE DA SALTO DE LINEA
	cout<<nombre;
	
	longitud=strlen(nombre);
	
	cout<<"\n\nNumero de elementos en la cadena es: "<<longitud;
	
	if(strcmp(x,y)==0){			//Se puede ocupar != (Diferente), con los signos < y >, indica el orden alfabetico
		cout<<"\n\nAmbas cadenas son iguales";
	}
	else{
		cout<<"\n\nAmbas cadenas no son iguales";
	}
	
	strcpy(vacio,nombre);
	strcat(vacio,x);
	cout<<"\n\n"<<vacio;
	
	strrev(vacio);
	cout<<"\n\n Todo esto al reves es: "<<vacio;
	
	strrev(vacio);
	cout<<"\n\n Todo esto al reves de nuevo es: "<<vacio;
	
	strupr(vacio);
	cout<<"\n\n Todo esto en MAYUSCULAS es: "<<vacio;
	
	strlwr(vacio);
	cout<<"\n\n Todo esto en minusculas es: "<<vacio;
	
	cout<<"\n\nLa cadena es : "<<num;
	numero=atoi(num);		//atoi para numeros enteros y atof para numero flotantes
	numero=numero*200;
	cout<<"\n\nAhora es numero y se multiplica por 200: "<<numero;
	
	return 0;
}
