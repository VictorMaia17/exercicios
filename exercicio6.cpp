#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    int num;
    int x;
    int y;
    
    cin >> num;
    cin >> x;
    cin >> y;
    
    
    if(num > x & num < y){
        printf("Está entre x e y");
    }
    else{
        printf("Não está entre x e y");
    }
    return 0;
}
