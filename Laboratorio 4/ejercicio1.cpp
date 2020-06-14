#include "iostream"

using namespace std;

int x, y;

int main(){

    cout <<"Verificacion de un numero si es divisble entre otro."<<endl;
    cout <<"Ingrese el primer numero:"<<endl;
    cin >>x;
    cout <<"Ingrese el segundo numero:"<<endl;
    cin >>y;
        if(x % y == 0){
            cout <<"El numero es divisible.";
        }
        else{
            cout <<"El numero no es divible";
        }

return 0;
}