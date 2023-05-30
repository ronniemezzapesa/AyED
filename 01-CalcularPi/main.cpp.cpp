#include <iostream>
#include <iomanip>
using namespace std;
double hallarPi (){
    double suma=0.0;
    double den=1.0;
    int exp=4.0;
    for ( int i=0 ; i < 1000000 ; i++){
        suma+= exp / den;
        den+=2;
        exp*=-1;
    }
    return suma;
}
int main() {
 double pi=0;
 pi=hallarPi();
 cout << fixed << setprecision(6);
 cout << "El valor de Pi con sus 6 decimales es " << pi << endl;

return 0;
}