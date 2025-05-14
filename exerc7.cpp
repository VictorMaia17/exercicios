#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	vector <string> nomes;
	int primeiraNota = 0;
	int segundaNota = 0;
	string nome;
	
	for(int i = 0; i < n; i++){
		
		cin >> nome;
		cin >> primeiraNota;
		cin >> segundaNota;
		
		if(primeiraNota + segundaNota >= 6){
			
			nomes.push_back(nome);
			
		}
	}
	
	for(int j = 0; j < nomes.size(); j++){
		
		cout << nomes[j];
		
	}
	
}
