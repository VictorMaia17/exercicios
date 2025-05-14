#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int vet[n];
	int maior = 0;
	int indice = 0;
	for(int i = 0; i < n; i++){
		
		cin >> vet[i];
		if(vet[i] > maior){
			
			maior = vet[i];
			indice = i;
			
		}
		
	}
	
	cout << maior << "\n";
	cout << indice << "\n";
	
}
