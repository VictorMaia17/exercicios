#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct mercadorias {
	
	string nome;
	float precoCompra;
	float precoVenda;
	
	
	pessoa(string nome, float precoCompra, float precoVenda){
		
		this->nome = nome;
		this->precoCompra = precoCompra;
		this->precoVenda = precoVenda;		
		
	}
	
};

int main(){
	
	int n;
	cin >> n;
	vector <mercadorias> mercadoriasInform;
	int lucroMen10 = 0;
	int lucroMen10Ma20 = 0;
	int lucroMa20 = 0;
	float totCompra = 0;
	float totVenda = 0;
	float lucro = 0;
	string nome;
	float precoCompra;
	float precoVenda;
	
	for(int i = 0; i < n; i++){
		
		cin >> nome;
		cin >> precoCompra;
		cin >> precoVenda;
		
		mercadoriasInform.push_back({nome, precoCompra, precoVenda});
		totCompra += precoCompra;
		totVenda += totVenda;
		
	}
	
	for(int j = 0; j < n; j++){
		
		if(mercadoriasInform[j].precoVenda - mercadoriasInform[j].precoCompra / (precoVenda / 100) < precoVenda / 100 * 10){
			
			lucroMen10++;
			
		}
		
		if else(mercadoriasInform[j].precoVenda - mercadoriasInform[j].precoCompra / (precoVenda / 100) <= precoVenda / 100 * 20)
			
			lucroMen10Ma20++;
			
		}
		
		else{
			
			lucroMa20++;
			
		}
		
	}
	
	cout << lucroMen10 << "\n";
	cout << lucroMen10Ma20 << "\n";
	cout << lucroMa20 << "\n";
	cout << totCompra << "\n";
	cout << totVenda << "\n";
	cout << totCompra - totVenda;
	
	
	
}
