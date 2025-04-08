#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string name;
    int age;
    
    cin >> name;
    cin >> age;
    
    printf("Seu nome é %s e sua idade é %d", name.c_str(), age);

    return 0;
}
