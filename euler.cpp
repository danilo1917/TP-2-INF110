#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    long double euler = 0, fat;
    int p;
    cout<< "Defina o número de termos para o cálculo do número de euler: "<<endl;
    cin >> p;
    // Faz a sequência até o número p de termos
    cout << setw(15) << "Termo";
    cout << setw(35) << "Aproximação ao número de euler\n";
    for (int i=0; i<p; i++){
        // Calcula o fatorial do número i
        fat = 1;
        for(int j=i;j>0;j--){
            fat = fat*j;
        }
        // Acumula a soma dos inversos dos fatoriais, 
        //que resultam numa aproximação para o número de euler.
        euler += 1.0/fat;

        if (i<10){
            cout << setw(15)<< i;
            cout << fixed << setprecision(15) << setw(25)<< euler << endl;

        }
    }
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(15)<< p;
    cout << fixed << setprecision(15) << setw(25)<< euler << endl;
    cout << fixed << setprecision(15) << "\nAproximação com "<<p<<" termos: "<< euler << endl;

    return 0;
}