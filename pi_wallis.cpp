#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long double pi = 1;
    int p;
    cout<< "Entre com o número de termos para o cálculo de pi, usando a série de Wallis: "<<endl;
    cin >> p;
    cout << setw(15) << "Termo";
    cout << setw(25) << "Aproximação de PI\n";
    for (int i=2; i<2*p; i+=2){
        // Conforme a iteração segue, cada termo do numerador é multiplicado
        // e repetido duas vezes, a primeira vez tem o denominador = numerador - 1
        // e a segunda tem denominador = numerador + 1. Tudo é acumulado no acumulador pi
        pi *= (double)i/(i-1);
        pi *= (double)i/(i+1);

        if (i<20){
            cout << setw(15)<< i/2;
            cout << fixed << setprecision(15) << setw(25)<< pi*2 << endl;

        }
    }

    pi *=2;

    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(15)<< p;
    cout << fixed << setprecision(15) << setw(25)<< pi << endl;
    cout << fixed << setprecision(15) << "\nAproximação de PI com "<<p<<" termos: "<< pi << endl;

    return 0;
}
