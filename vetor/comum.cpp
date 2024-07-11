#include <iostream>

using namespace std;

int main() {
    int quant1, quant2, i, n1=0, i2, tentativas=0;

    cin >> quant1;

    int vetor1[quant1];

    for(i=0;i<quant1;i++){
        cin >> vetor1[i];
    }

    cin >> quant2;

    int vetor2[quant2];

    for(i=0;i<quant2;i++){
        cin >> vetor2[i];
    }

    for(i=0;i<quant2;i++){
        n1 = vetor2[i];
        for(i2=0;i2<quant1;i2++){
            if(n1==vetor1[i2]){
                tentativas +=1;
                break;
            }
        }
    }

    if(tentativas>0){
        cout << "Existe" << endl;
    }else{
        cout << "Nao existe" << endl;
    }

    return 0;
}