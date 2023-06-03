#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double hallarPi (){
    double suma=0.0;
    double den=1.0;
    int exp=4.0;
    while (fabs(suma-3.141592) >= 0.0000001){
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