#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int vet[n];
	float total = 0;
	int div = 0;
	for(int i = 0; i < n; i++){
		
		cin >> vet[i];
		if(vet[i] % 2 == 0){
			total += vet[i];
			div++;
		}
	}
	cout << total / div << "\n";
	
}
