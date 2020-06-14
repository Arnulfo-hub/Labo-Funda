#include "iostream"

using namespace std;

int x;

int main (){

    cout <<"Numero par o impar."<<endl;
    cout <<"Ingrese un numero:"<<endl;
    cin >>x;

        if(x % 2 == 0){

            cout <<"El numero es par.";
        }
        else{
            cout <<"El numero es impar";
        }

return 0;        
}