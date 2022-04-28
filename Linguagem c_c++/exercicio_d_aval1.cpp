#include "iostream"
#include "math.h"
#include "cstdlib"
#define km_litro 12 
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    
    double tempo=0,velocidade=0,distancia=0,litros_usados=0;
    
    cout << "\nDigite o tempo gasto durante a viagem:\n";
    cin >> tempo;
    
    cout << "\nDigite a velocidade média gasta durante a viagem:\n";
    cin >> velocidade;
    
    distancia = tempo * velocidade;
    
    litros_usados = distancia / km_litro;
    
    cout << "\nA velocidade média e o tempo percorridos durante a viagem foi : " << velocidade << "km/h e " << tempo << "h.\n";
    cout << "\nA distância percorrida e a quantidade de litros usados na viagem foram: " << distancia << "km " << litros_usados << "L." << endl; 
    
    system("pause");
    
    return 0;
}
