#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    long double pi, inicial = sqrt(2), total = 1;
    int p;
    cout<< "Entre com o número de termos para o cálculo de pi, usando a série de Viète: "<<endl;
    cin >> p;
    cout << setw(15) << "Termo";
    cout << setw(25) << "Aproximação de PI\n";

    for (int i=1; i<=p; i++){
        // O valor inicial é dividido por 2 e multiplicado a valor total
        // que dará origem ao valor de pi
        total *= inicial/2;
        // O valor inicial é recalculado
        inicial = sqrt(inicial + 2);
        
        if (i<=10){
            cout << setw(15)<< i;
            cout << fixed << setprecision(15) << setw(25)<< 2.0/total<< endl;

        }
    }
    pi = 2.0 / total;

    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(15)<< p;
    cout << fixed << setprecision(15) << setw(25)<< pi << endl;
    cout << fixed << setprecision(15) << "\nAproximação de PI com "<<p<<" termos: "<< pi << endl;

    return 0;
}