#include <iostream>
#include <iomanip>
# include <cmath>
using namespace std;
int main(){
    long double PI = 3.141592653589, cosseno = 0.0, fat;
    double ang, ang_rad;
    int p, c2 = 0;
    
    cout<< "Entre com uma medida de ângulo em graus (°): "<<endl;
    cin >> ang;
    cout<< "Entre com o número de termos para o cálculo do cosseno: "<<endl;
    cin >> p;
    // Transformação de graus para radianos
    ang_rad = PI*(ang/180.0);

    cout << setw(15) << "Termo";
    cout << setw(30) << "Aproximação ao cosseno de "<<ang<<"°\n";

    for (int i=0; i<2*p; i+=2){
        // Calcula o fatorial do número i
        fat = 1;
        for(int j=i;j>0;j--){
            fat = fat*j;
        }
        // Se o contador c2 for par, então o termo é somado ao acumualdor cosseno
        if (c2%2==0){
            // Cálculo da sequência do cosseno
            cosseno += pow(ang_rad, i)/fat;
            
        }
        // Se o contador c2 for ímpar, então o termo é subtraído do acumulador cosseno
        else{
            cosseno -= pow(ang_rad, i)/fat;
            
        }
        // Escreve as somas dos termos até o décimo
        if (i<20){
            cout << setw(15)<< i/2;
            cout << fixed << setprecision(15) << setw(25)<< cosseno << endl;

        }
        c2++;

    }
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(15)<< p;
    cout << fixed << setprecision(15) << setw(25)<< cosseno << endl;
    cout << fixed << setprecision(15) << "\nAproximação do cosseno com "<<p<<" termos: "<< cosseno << endl;

    return 0;
}