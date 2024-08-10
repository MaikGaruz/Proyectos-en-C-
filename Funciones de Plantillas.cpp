#include<iostream>
using namespace std;

//Prototopi de Funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
	int n1=-4;
	float n2=-56.77;
	double n3=123.333;
	
	mostrarAbs(n1);
	mostrarAbs(n2);
	mostrarAbs(n3);
	
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero=numero*-1;
	}
	cout<<"El valo absoluto del numero es: "<<numero<<endl;
}
