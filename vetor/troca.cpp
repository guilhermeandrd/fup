#include <iostream>

using namespace std;

int main() {
    int quant, posi1, posi2,i,troca=0;

    cin >> quant;

    int vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    cin >> posi1 >> posi2;

    troca = vetor[posi1];
    vetor[posi1] = vetor[posi2];
    vetor[posi2] = troca;

    for(i=0;i<quant;i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}