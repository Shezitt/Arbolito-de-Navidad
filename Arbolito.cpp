#include<bits/stdc++.h>
using namespace std;

// Método para imprimir una cantidad de espacios específica.
void Espacios(int n){
	while(n--)
		cout << ' ';
}

// Método para imprimir el arbolito, dada la altura deseada.
void Arbolito(int n){
	Espacios(n);
	cout << "*\n";
	int j = 1;
	for(int i=n-1; i>=0; --i){
		Espacios(i);
		cout << '/';
		Espacios(j);
		cout << "\\\n";
		j+=2;
	}
	if(n>1){
		Espacios(n-2);
		cout << " | |\n";
		return;
	}
	// Si n = 1.
	cout << " |\n";
}

int main(){
	int n;
	// Ingresar la altura para el arbolito.
	cin >> n;
	Arbolito(n);
}

