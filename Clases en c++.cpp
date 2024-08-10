#include<iostream>
using namespace std;

class Persona{
	private:
		int edad;
		string nombre;
	
	public:
		Persona(int,string);	//El metodo constructor de la clase inicializa nustros atributos
		void leer();
		void correr();
};

//Constructor:
//En la programación orientada a objetos (y en Java), 
//un constructor es un método especial que se utiliza para 
//inicializar un objeto recién creado y asignarle valores 
//iniciales a sus variables de instancia.
Persona::Persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" años."<<endl;
}

int main(){
	Persona p1 = Persona(20,"Miguel");
	Persona p2 = Persona(30,"Alexis");
	Persona p3 = Persona(40,"Cesar");
	
	p1.leer();
	p2.leer();
	p3.leer();
	
	cout<<"\n\n";
	
	p1.correr();
	p2.correr();
	p3.correr();
	
	cout<<"\n\n";
	
	system("pause");
	return 0;
}
