#include <iostream>

using namespace std;

int main(){
	int array1[3]={1,2,3};
	int array2[3]={4,5,6};
	int array3[5];
	
	for(int i=0;i<3;i++){
		cout<<" "<<array1[i];	
	}
	
	cout<<"\n";
	
	for(int i=0;i<3;i++){	
		cout<<" "<<array2[i];
	}
	
	cout<<"\n Ahora se concatenaran...";
	cout<<"\n";
	
	for(int i=0;i<3;i++){	//1 2 3
		array3[i]=array1[i];
	}
	
	for(int i=3;i<6;i++){	
		array3[i]=array2[i-3]; //4 5 6
	}
	
	for(int i=0;i<6;i++){	
		cout<<" "<<array3[i];
	}
	
	cout<<"\n Ahora se multiplicaran por 2...";
	for(int i=0;i<6;i++){	
		array3[i]=array3[i]*2;
		cout<<" "<<array3[i];
	}
	
	
	return 0;
}
