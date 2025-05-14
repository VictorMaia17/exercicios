#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int vet[n];
	int quant = 0;
	for(int i = 0; i < n; i++){
		
		cin >> vet[i];
		
	}
	
	for(int j = 0; j < n; j++){
		if(vet[j] % 2 == 0){
			cout << vet[j] << "\n";
			quant++;
		}
	}
	
	cout << quant;
	
}
