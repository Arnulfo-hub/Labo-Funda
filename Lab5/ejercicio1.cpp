#include "iostream"
#include "cmath"

using namespace std;

int mcd(int numa, int numb);

int main(){

int num1, num2;

    cout <<"Ingrese el primer valor: "<<endl;
    cin >>num1;
    cout <<"INgrese el segundo valor: "<<endl;
    cin >>num2;   

    cout <<"EL MCD es: "<< mcd(num1, num2);

    return 0;
}

int mcd(int numa, int numb){

int resp, x;


while(x!=0){

        numa = numb;
        numb = resp;

            if(numa > numb){
                resp = numa/numb;
                x =numa%numb;
                }
            }
return x;
}