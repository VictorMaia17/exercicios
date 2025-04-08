#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    float salario;
    float imposto;
    
    cin >> salario;
    cin >> imposto;
    
    printf("O salário líquido é de %.2fR$", salario - imposto);

    return 0;
}
