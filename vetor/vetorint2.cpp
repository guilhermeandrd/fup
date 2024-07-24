#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int quant, i=0, resultado=0, expoente=0;
    
    cin >> quant;

    
    int vetor[quant];
    int potencia[quant];
    
    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }
    
    expoente = quant-1;

    for(i=0;i<quant;i++){
        potencia[i] = pow(10,expoente);
        resultado += potencia[i]*vetor[i];
        expoente--;
        //tenho que arranjar uma forma de colocar o
    }
    //vamos testa primeiro as potências deu certo
    //agora fazer a multiplicacao de forma certa
    
    //for(i=0;i<quant; i++){
        cout << resultado;
    //}
}