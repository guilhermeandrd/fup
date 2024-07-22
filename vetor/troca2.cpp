#include <iostream>

using namespace std;

int main() {
    int quant,i;

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
        cout << vetor2[i] << " ";
    }

    cout << "\n";

    for(i=0;i<quant;i++){
        cout << vetor1[i] << " ";
    }

    return 0;
}