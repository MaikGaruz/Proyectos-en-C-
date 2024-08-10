#include <iostream>
using namespace std;

float pi=3.1415;

void introduccion();
void perimetros(int l,float bT,float aT,int bR,int aR,int r);

int main(){
	
	introduccion();
	
	//cout<<"\a"; pitido
	//cout<<"\v"; tab vertical
	//cout<<"\r"; retorno de carro
	//cout<<"\b"; retroceso de espacio
	//cout<<"\f"; siguiente pag
	
	//perimetro(ladoC, baseT, alturaT, baseR, alturaR, radio);
	
	return 0;
}

void introduccion(){
	int ladoC, baseR, alturaR, radio;
	float baseT, alturaT;
	
	cout<<"\n\tPrograma que calcula perimetros de 4 figuras: \n";
	cout<<"\n\t Cuadrado";
	cout<<"\n\t Ingrese la longitud de un lado del Cuadrado: ";
	cin>>ladoC;
	
	cout<<"\n\t Triangulo";
	cout<<"\n\t Ingrese la base del Triangulo: ";
	cin>>baseT;
	cout<<"\n\t Ingrese la altura del Triangulo: ";
	cin>>alturaT;
	
	cout<<"\n\t Rectangulo";
	cout<<"\n\t Ingrese la base del Rectangulo: ";
	cin>>baseR;
	cout<<"\n\t Ingrese la altura del Rectangulo: ";
	cin>>alturaR;
	
	cout<<"\n\t Circulo";
	cout<<"\n\t Ingrese el radio del Circulo: ";
	cin>>radio;
	
	perimetros(ladoC, baseT, alturaT, baseR, alturaR, radio);
}

void perimetros(int l,float bT,float aT,int bR,int aR,int r){
	int perimetroC,perimetroR;
	float perimetroT, perimetroCirculo;
	
	perimetroC=l*l;
	perimetroR=bR*aR;
	perimetroT=(bT*aT)/2;
	perimetroCirculo=pi*(r*r);
	
	cout<<"\n\t El perimetro del Cuadrado es: " <<perimetroC;
	cout<<"\n\t El perimetro del Rectangulo es: " <<perimetroR;
	cout<<"\n\t El perimetro del Triangulo es: " <<perimetroT;
	cout<<"\n\t El perimetro del Circulo es: " <<perimetroCirculo;
}

