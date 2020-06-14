#include "iostream"
#include "string"

using namespace std;

string palabra;

int main(){

    cout <<"Ingrese una palabra: ";
    getline(cin, palabra);

    if(palabra.front() == palabra.back()){

        cout <<"La palabra ingresada inicia y  termina con la misma letra";
    }
        else{

            cout <<"La palabra ingresada no inicia y termina con la misma letra";
        }

    return 0;
}