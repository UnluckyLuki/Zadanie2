#include "pole.h"
#include "objetosc.h"
#include <iostream>

using namespace std;




int main()
{
    pole P;
    objetosc O;
    double pbok1, pbok2, obok1, obok2, obok3;
    cout << "PODAJ BOK1 DLA PROSTOKATA: ";
    cin >> pbok1;
    cout << "PODAJ BOK2 DLA PROSTOKATA: ";
    cin >> pbok2;
    cout << "PODAJ BOK1 DLA PROSTOPADLOSCIANU: ";
    cin >> obok1;
    cout << "PODAJ BOK2 DLA PROSTOPADLOSCIANU: ";
    cin >> obok2;
    cout << "PODAJ BOK3 DLA PROSTOPADLOSCIANU: ";
    cin >> obok3;
    cout << "POLE PROSTOKATA WYNOSI: " << P.ObliczPole(pbok1, pbok2) << endl;
    cout << "OBJETOSC PROTOPADLOSCIANU WYNOSI: " << O.ObliczObjetosc(obok1, obok2, obok3) << endl;
    return 0;
}
