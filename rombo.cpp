#include <iostream>

using namespace std;

int main(){
	
	int n = 0;
	int medio = 0;
	int nEspacios = 0;
	int nEspaciosDentro = -1;

	cout << " Introduzca numero inpar: "<<endl;
	cin >> n;

	medio = (n / 2.0) + 0.5;
	nEspacios = (n / 2.0) - 0.5


// i < n/2 + 0.5
	for(int i = 1; i < medio; i++){

		for(int j = 0; i < nEspacios; i++){
			cout << " ";
				}

		if(i != 1){
			cout << "*";
		}

		for(int k = 0; i < nEspaciosDentro; i++){
			cout << " ";
		}


		cout << "*" << endl;
		
		nEspacios-- ;
		nEspaciosDentro+=2 ;

	}
// i = n/2 + 0.5

	cout << "*";

	for(i = 0; i < n - 2; i++){
		cout << ' ';
	}

	cout << "*" << endl;


// i > n/2 + 0.5
	for(int i = medio; i < n; i++){

		for(int j = 0; i < nEspacios; i++){
			cout << " ";
				}

		if(i != 1){
			cout << "*";
		}

		for(int k = 0; i < nEspaciosDentro; i++){
			cout << " ";
		}


		cout << "*" << endl;

		nEspacios++ ;
		nEspaciosDentro-=2 ;

	}

	return 0
}
