#include "iostream"
#include "ctime"

using namespace std;

int year ;

int main(){


time_t now = time(0);
tm *time = localtime(&now);

cout <<"La fecha es: " <<time->tm_mday <<"/" <<time->tm_mon << "/" <<time->tm_year + 1900 <<endl; 
cout <<"La fecha del dia siguiente es: " <<1 + time->tm_mday <<"/" <<time->tm_mon << "/" <<time->tm_year + 1900; 
    return 0;
}