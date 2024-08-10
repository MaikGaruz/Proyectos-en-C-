#include <iostream>

using namespace std;

void tablasMultiplicar();
void matriz();
void matrizN();

int main(){
	
	//tablasMultiplicar();
	//matriz();
	matrizN();
	
	return 0;
	
}

void tablasMultiplicar(){
	
	int array[10],n;
	char res;
	do{
	cout<<"\n TABLAS DE MULTIPLICAR ...";
	cout<<"\n Que tabla quieres vizualizar... ";
	cin>>n;
	for(int i=1; i<11; i++){
		array[i]=i*n;
		cout<<"\n "<<n<<" X "<<i<<" = "<< array[i];
	}
	cout<<"\n\n Deseas repetir el programa? ";
	cin>>res;
	
	}while(res == 's' or res == 'S');
}

void matriz(){
	
	for(int i=0; i<10 ; i++){	//Las columnas, OJOO
		cout<<"\n o ";
		for(int j=0; j<9 ; j++){
		cout<<" o ";
	}
}
}

void matrizN(){
	
	for(int i=0; i<10 ; i++){	//Las columnas, OJOO
		cout<<"\n "<<i*10;
		for(int j=1; j<11 ; j++){
		cout<<" "<<(i*10)+j;
	}
}
}
