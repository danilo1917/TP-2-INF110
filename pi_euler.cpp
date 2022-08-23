#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    long double pi = 0.0;
    int p;
    cout<< "Entre com o número de termos para o cálculo de PI, usando a série de Euler: "<<endl;
    cin >> p;
    cout << setw(15) << "Termo";
    cout << setw(25) << "Aproximação de PI\n";

    for (int i=1; i<=p; i++){
        // Acumula o quadrado inverso de cada termo
        pi+= 1.0/(i*i);

        if (i<=10){
            cout << setw(15)<< i;
            cout << fixed << setprecision(15) << setw(25)<< sqrt(6*pi) << endl;

        }

    }
    pi = sqrt(6*pi);

    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(15)<< p;
    cout << fixed << setprecision(15) << setw(25)<< pi << endl;
    cout << fixed << setprecision(15) << "\nAproximação de PI com "<<p<<" termos: "<< pi << endl;


    return 0;
}