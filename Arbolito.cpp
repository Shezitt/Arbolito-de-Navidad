#include<bits/stdc++.h>
using namespace std;

void Espacios(int n){
	while(n--)
		cout << ' ';
}

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
	cout << " |\n";
}

int main(){
	int n;
	cin >> n;
	Arbolito(n);
}

