#include <iostream>
#include <iomanip>
# include <cmath>
using namespace std;
int main(){
    long double PI = 3.141592653589, seno = 0.0, fat;
    double ang, ang_rad;
    int p, c2 = 0;
    
    cout<< "Entre com uma medida de ângulo em graus (°): "<<endl;
    cin >> ang;
    cout<< "Entre com o número de termos para o cálculo do seno: "<<endl;
    cin >> p;
    // Transformação de graus para radianos
    ang_rad = PI*(ang/180.0);

    cout << setw(15) << "Termo";
    cout << setw(30) << "Aproximação ao seno de "<<ang<<"°\n";

    for (int i=1; i<2*p; i+=2){
        // Calcula o fatorial do número i
        fat = 1;
        for(int j=i;j>0;j--){
            fat = fat*j;
        }
        // Se o contador c2 for par, então o termo é somado ao acumualdor seno
        if (c2%2==0){
            // Cálculo da sequência do seno
            seno += pow(ang_rad, i)/fat;
            
        }
        // Se o contador c2 for ímpar, então o termo é subtraído do acumulador seno
        else{
            seno -= pow(ang_rad, i)/fat;
            
        }
        // Escreve as somas dos termos até o décimo
        if (i<20){
            cout << setw(15)<< (i+1)/2;
            cout << fixed << setprecision(15) << setw(25)<< seno << endl;

        }
        c2++;

    }
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(20)<< ".\n";
    cout << setw(15)<< p;
    cout << fixed << setprecision(15) << setw(25)<< seno << endl;
    cout << fixed << setprecision(15) << "\nAproximação do seno com "<<p<<" termos: "<< seno << endl;

    return 0;
}