#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    long double pi, k;
    int p, p0;
    cout<< "Entre com o número de termos para o cálculo de pi, usando a série de Brouncker: "<<endl;
    cin >> p;
    cout << setw(15) << "Termo";
    cout << setw(25) << "Aproximação de PI\n";

    // Vai iterando sobre os ímpares de 1 a 2p e calcula a aproximação de 
    // pi para cada iteração
    for (int j = 1; j<2*p; j+=2){
        k = 1.0;
        for (int i=j; i>0; i-=2){
            // O iterador começa do último valor e calcula o novo valor de k.
            // O valor de k é o denominador de cada divisão feita, por exemplo:
            // Caso p = 5, k = 2 + 5²/1, depois k = 2 + 3²/ (2 + 5²), depois k = 2 + 1/(2 + 3²/ (2 + 5²))
            k = 2.0 + (i*i) / k;

        }
        if (j<20){
            cout << setw(15)<< (j + 1)/2;
            cout << fixed << setprecision(15) << setw(25)<< 4.0/(k-1)<< endl;

        }

    }

    pi = 4.0 / (k-1);

    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(15)<< p;
    cout << fixed << setprecision(15) << setw(25)<< pi << endl;
    cout << fixed << setprecision(15) << "\nAproximação de PI com "<<p<<" termos: "<< pi << endl;

    return 0;
}
