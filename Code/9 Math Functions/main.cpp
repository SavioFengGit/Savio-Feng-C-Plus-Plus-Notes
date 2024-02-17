#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x = 3.99;
    double y = 4;
    double z;

    z = max(x, y);     // assegna a z il valore massimo tra x e y
    cout << z << endl; 
    z = min(x, y);     // assegna a z il valore minimo tra x e y
    cout << z << endl; 
    z = pow(2, 4);     // assegna a z il valore di 2 elevato alla quarta potenza, cioè 16
    cout << z << endl; 
    z = sqrt(9);       // assegna a z il valore della radice quadrata di 9, cioè 3
    cout << z << endl; 
    z = abs(-3);       // assegna a z il valore assoluto di -3, cioè 3
    cout << z << endl; 
    z = round(x);      // assegna a z il valore di x arrotondato all'intero più vicino
    cout << z << endl; 
    z = ceil(x);       // assegna a z il valore di x arrotondato per eccesso all'intero successivo
    cout << z << endl; 
    z = floor(x);      // assegna a z il valore di x arrotondato per difetto all'intero precedente
    cout << z << endl; 

    return 0;
}