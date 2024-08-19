#include <iostream>

using namespace std;

void lerVetor(int quant, int vetor[]){
    int i;

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    
}

void imprimirVetor(int quant, int vetor[]){
    int i;

    for(i=0;i<quant;i++){
        cout << vetor[i] << "\n";

    }

    
}

int main() {
    int quant=9;

    int vetor1[quant];

    lerVetor(quant, vetor1);

    imprimirVetor(quant, vetor1);

    return 0;
}
