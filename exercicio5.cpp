#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    float salario;
    float imposto1;
    float imposto2;
    float imposto3;
    
    cin >> salario;
    cin >> imposto1;
    cin >> imposto2;
    cin >> imposto3;
    
    printf("O salário líquido é de %.2fR$", salario - imposto1 - imposto2 - imposto3);

    return 0;
}
