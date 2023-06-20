#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double hallarPi (){
    double suma=0.0, ant=0.0;
    double den=1.0;
    int exp=1.0;
    do {
        ant=suma;
        suma+= exp / den;
        den+=2;
        exp*=-1;
    } while (fabsf(suma-ant) > 0.0000001);
    return suma*4;
}
int main() {
 double pi=hallarPi();
 cout << fixed  << setprecision(6);
 cout << "El valor de Pi con sus 6 decimales es " << trunc(pi*1000000)/1000000 << endl;
return 0;
}
