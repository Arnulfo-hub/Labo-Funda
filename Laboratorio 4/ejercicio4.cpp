#include "iostream"
#include "string"

using namespace std;

string palabra;

int main(){

    cout <<"Ingrese una palabra: "<<endl;
    getline(cin, palabra);

    if(palabra.size() >=10 ){

        cout <<"La palabra es mayor a 10 caracteres"<<endl;
    }
        else{

            cout <<"La palabra es menor a 10 caracteres"<<endl;
        }
            if(palabra.size() % 2 == 0){

            cout <<"La cantidad de caracteres es par"<<endl;
            }
             else{
                 
                cout <<"La cantidad de caracteres es impar"<<endl;
             }


return 0;    
}