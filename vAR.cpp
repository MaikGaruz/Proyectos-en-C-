#include <iostream>
//#include <cstdlib>

using namespace std;

float pi=3.1416;

void pideEdad ();
int sumaDosN (int x,int y);



int main(){
	int a,b,sumaAB;
	//pideEdad();		//Funcion que no regresa nada
	
	cout<<"\n\n";
	cout<<"\t El valor aproximado de pi es..."<<pi;
	cout<<"\n\n";
	
	cout<<"\t Ingrese un numero cualquiera: ";
	cin>>a;
	cout<<"\n";
	cout<<"\t Ingrese otro numero cualquiera: ";
	cin>>b;
	sumaAB=sumaDosN(a,b);
	cout<<"\n\t La suma es = " <<sumaAB;
	
		
	//system("pause");
	//system("cls");
	return 0;
}

void pideEdad (){
	int edad1;
	string nom1;
	
	cout<<"\t Hola. Bienevenido. \n\n";
	cout<<"\t INGRESA TU EDAD: ";
	cin>>edad1;
	
	cout<<"\t INGRESA TU NOMBRE: ";
	cin>>nom1;
	
	cout<<"\t Tu edad es " << edad1 <<" y te llamas "<< nom1 <<"\n\n";
	system("pause");
}

int sumaDosN (int x, int y){
	return x + y;
}
