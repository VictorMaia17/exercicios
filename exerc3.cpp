#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int vet[n];
	int vet2[n];
	int vet3[n];
	for(int i = 0; i < n; i++){
		
		cin >> vet[i];
		
	}
	
	for(int j = 0; j < n; j++){
		
		cin >> vet2[j];
		
	}
	
	for(int k = 0; k < n; k++){
		
		vet3[k] = vet2[k] + vet[k];
		cout << vet3[k] << "\n";
		
	}
	
	
}
