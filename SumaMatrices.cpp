#include <iostream>
using namespace std;

int main(){
	
	int a[2][2], b[2][2], c[2][2];
	
	cout<<"\n\nSe requiere sumar dos matrices de tamaño 2x2...";
	//Primero hay que rellenar las matrices... 
	//Muestra la matriz 2x2 vacia
	for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<2;j++){
			cout<<" 0 ";
		}
	}
	
	cout<<"\n\n";
	
	
	//Rellenando la matriz 2x2 de a
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"Ingrese el valor ["<<i<<"]["<<j<<"] : ";
			cin>>a[i][j];
			cout<<"\nMatriz a";
	for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<2;j++){
			cout<<" "<<a[i][j];
		}
	}
			cout<<"\n";
		}
	}
	
	//Muestra la matriz 2x2 de a
	cout<<"\nMatriz a";
	for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<2;j++){
			cout<<" "<<a[i][j];
		}
	}
	
	cout<<"\n\n\n";
	//Rellenando la matriz 2x2 de b
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"Ingrese el valor ["<<i<<"]["<<j<<"] : ";
			cin>>b[i][j];
			cout<<"\n";
		}
	}
	
	//Muestra la matriz 2x2 de b
	cout<<"\nMatriz b";
	for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<2;j++){
			cout<<" "<<b[i][j];
		}
	}
	
	cout<<"\n\n";
	//Suma de las matrices 2x2 de a+b
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	cout<<"\n\n\n";
	//Muestra la matriz 2x2 de c
	cout<<"\nSuma de las matrices 2x2 de a+b";
	cout<<"\nMatriz a+b \n";
	for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<2;j++){
			cout<<"   "<<c[i][j];
		}
	}
	
	return 0;
}
