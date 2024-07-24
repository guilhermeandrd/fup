#include <iostream>

using namespace std;

int main() {
    int quant,i, passo=0;

    cin >> quant;

    int vetor1[quant];
    int vetor2[quant];

    for(i=0;i<quant;i++){
        cin >> vetor1[i];
    }

    for(i=0;i<quant;i++){
        cin >> vetor2[i];
    }

    for(i=0;i<quant;i++){
        passo = vetor1[i];
        vetor1[i] = vetor2[i];
        vetor2[i] = passo;
    }

    for(i=0;i<quant;i++){
        cout << vetor1[i] << " ";
    }

    cout << "\n";

    for(i=0;i<quant;i++){
        cout << vetor2[i] << " ";
    }

    return 0;
}