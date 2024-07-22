#include <iostream>

using namespace std;

int main() {
    int quant,i, i2, soma=0;

    cin >> quant;

    int vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    for(i=0;i<quant;i++){
        for(i2=0;i2<quant;i2++){
            if((vetor[i]*-1)==vetor[i2]){
                soma += 1;
                break;
            }
        }
    }

    cout << soma/2;

    return 0;
}