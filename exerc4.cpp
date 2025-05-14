#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	float vet[n];
	float total = 0;
	for(int i = 0; i < n; i++){
		
		cin >> vet[i];
		total += vet[i];
	}
	cout << total / n << "\n";
	
	for(int j = 0; j < n; j++){
		
		if(vet[j] < total / n){
			
			cout << vet[j] << "\n";
			
		}
	
	}
	
}
