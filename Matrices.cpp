#include <iostream>

using namespace std;

void matriz2();

int main(){
	int matriz[3][3]={1,2,3,4,5,6,7,8,9};	
	
	for(int i=0;i<3;i++){			//i son renglones y j columnas
		for(int j=0;j<3;j++){
			cout<<" "<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	matriz2();
		
	return 0;
}

void matriz2(){
	int renglon, columna, matriz[100][100];
	
	cout<<"\n\nDe cuantos renglones quieres que sea la matriz: ";
	cin>>renglon;
	
	cout<<"\n\nDe cuantas columnas quieres que sea la matriz: ";
	cin>>columna;
	
	for(int i=0;i<renglon;i++){			//i son renglones y j columnas
		for(int j=0;j<columna;j++){
			cout<<"\nInserte el valor del numero en la coordenada "<<i<<j<<" : ";
			cin>>matriz[i][j];
		}
		cout<<"\n";
	}
	
	
	cout<<"\n\n\nMATRIZ...\n";
	for(int i=0;i<renglon;i++){			//i son renglones y j columnas
		for(int j=0;j<columna;j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<"\n";
	}
	
}
