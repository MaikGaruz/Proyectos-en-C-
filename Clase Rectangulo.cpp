#include<iostream>
using namespace std;

class Rectangulo{
	private:
		float largo, ancho;
	public:
		Rectangulo(float,float);
		~Rectangulo();	//Destructor
		void area();
		void perimetro();
};

Rectangulo::Rectangulo(float _largo, float _ancho){
	largo=_largo;
	ancho=_ancho;
}

Rectangulo::~Rectangulo(){
}

void Rectangulo::area(){
	float area;
	area=largo*ancho;
	cout<<"\n El area del Rectangulo es: "<<area;
}

void Rectangulo::perimetro(){
	float perimetro;
	perimetro=(2*largo)+(2*ancho);
	cout<<"\n El perimetro del Rectangulo es: "<<perimetro;
}

int main(){
	float x,y;
	cout<<"\n\nIngresa el largo del Rectangulo: ";
	cin>>x;
	cout<<"\n\nIngresa el ancho del Rectangulo: ";
	cin>>y;
	
	Rectangulo r1 = Rectangulo(x,y);
	
	r1.area();
	r1.perimetro();
	r1.~Rectangulo();	//Destruye un objeto
	 
	return 0;
}
