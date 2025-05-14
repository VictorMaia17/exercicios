#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct pessoa {
	
	char gen;
	float altura;
	
	pessoa(char gen, float altura){
		
		this->gen = gen;
		this->altura = altura;		
		
	}
	
};

int main(){
	
	int n;
	cin >> n;
	vector <pessoa> inform;
	float maiorAltura = 0;
	float menorAltura = 0;
	float totMulheres = 0;
	int numHomens = 0;
	int quantMulheres = 0;
	float altura = 0;
	char gen;
	
	for(int i = 0; i < n; i++){
		
		cin >> altura;
		cin >> gen;
		
		inform.push_back({gen, altura});
		
	}
	
	cout << inform[0].altura;
	
	for(int j = 0; j < n; j++){
		
		if(inform[j].altura > maiorAltura){
			
			maiorAltura = inform[j].altura;
			
		}
		if(inform[j].altura < menorAltura){
			
			menorAltura = inform[j].altura;
			
		}
		else if(n = 0){
			
			menorAltura = inform[j].altura;
			
		}
		
		if(inform[j].gen == 'F'){
			totMulheres += altura;
			quantMulheres++;
		}
		if(inform[j].gen == 'M'){
			numHomens++;
		}
	}
	
	cout << maiorAltura << "\n";
	cout << menorAltura << "\n";
	cout << totMulheres / quantMulheres << "\n";
	cout << numHomens << "\n";
	
	
	
}
