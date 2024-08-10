#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

void generarArreglo(int matriz[n][n]);
void imprimirArreglo(int matriz[n][n]);

int matriz[100][100];

int main(){

	int n;    
  	cin >> n;
  	
  	int matriz[n][n];
  	
  	generarArreglo(matriz);
  	imprimirArreglo(matriz);
  	system("pause");
	
	return 0;
}

void generarArreglo(int matriz[n][n]){
  srand(time(NULL));
  for(int i=0;i<=6;i++){
    for(int j=0;j<=6;j++){
      matriz[i][j]=rand()%99+1;
    }
  }
}

void imprimirArreglo(int matriz[n][n]){
  for(int i=0;i<=6;i++){
    for(int j=0;j<=6;j++){
      cout<<matriz[i][j]<<"\t";
    }
    cout<<endl;
  }
}

