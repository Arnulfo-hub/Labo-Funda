#include "iostream"
#include "ctime"

using namespace std;



int main(){

time_t now = time(0);
tm *time = localtime(&now);
    
cout << "La hora es: "<<time->tm_hour << ":"<< time->tm_min << ":" << time->tm_sec <<endl;
cout << "La hora segundos despues: "<<time->tm_hour << ":" <<  1 + time->tm_min << ":" <<  1 + time->tm_sec;
    
    return 0;
}