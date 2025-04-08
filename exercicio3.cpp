#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string str;
    int strConvert;
    int num;
    string numConvert;
    
    cin >> str;
    cin >> num;
    
    strConvert = stoi(str);
    numConvert = to_string(num);
    
    printf("%d %s", strConvert, numConvert.c_str());

    return 0;
}
