#include <iostream>
#include <iomanip>
# include <cmath>
using namespace std;
int main(){
    long double pi = 0;
    int p, c2 = 0;

    cout<< "Entre com o número de termos para o cálculo de PI, usando a série de Leibniz: "<<endl;
    cin >> p;
    cout << setw(15) << "Termo";
    cout << setw(25) << "Aproximação de PI\n";
    for (int i=1; i<2*p; i+=2){
        // Se o contador c2 for par soma o inverso dos ímpares ao acumulador pi
        if (c2%2==0){
            pi += 1.0/i;
        }
        // Se o contador c2 for par subtrai o inverso dos ímpares ao acumulador pi
        else{
            pi -= 1.0/i;
        }
        if (i<20){
            cout << setw(15)<< i/2 + 1 ;
            cout << fixed << setprecision(15) << setw(25)<< pi*4 << endl;

        }
        c2++;

    }
    pi *= 4;

    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(15)<< p;
    cout << fixed << setprecision(15) << setw(25)<< pi << endl;
    cout << fixed << setprecision(15) << "\nAproximação de PI com "<<p<<" termos: "<< pi << endl;

    return 0;
}