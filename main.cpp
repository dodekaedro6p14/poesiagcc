// 7 de junio 2021, 12.23  curso de c++ en ubuntu

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <string> msg {"Este ", "Es ", "Un mensaje ", "De texto en c++"};
        
    for (const string & word : msg)

    { 
        cout << word << "";
    }
    cout << endl;
    
}