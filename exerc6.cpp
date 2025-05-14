#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	string nomes[n];
	int idades[n];
	int indiceMaiorIdade = 0;
	int maiorIdade = 0;
	
	for(int i = 0; i < n; i++){
		
		cin >> nomes[i];
		cin >> idades[i];
		
		if(idades[i] > maiorIdade){
			
			indiceMaiorIdade = i;
			
		}
	}
	
	cout << nomes[indiceMaiorIdade] << " ";
	cout << idades[indiceMaiorIdade];
	
}
