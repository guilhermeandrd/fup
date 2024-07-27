#include <iostream>

using namespace std;

int main() {
    int quant1, quant2=0, i=0, passo=0, n=0, e=0;

    cin >> quant1;

    int vetor[quant1];
    int vetor2[quant1];

    quant2=0;
    
    //ler o vetor
    for(i=0;i<quant1;i++){
        cin >> vetor[i];
    }
    
    //organizar o vetor
    for(e=0;e<quant1-1;e++){
        for(i=0;i<quant1-i-1;i++){
            if(vetor[i]>vetor[i+1]){
                passo = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = passo;
            }
        }
    }

    //
    for(int i = 0; i < quant1; i++) {
        if(i == 0 || vetor[i] != vetor[i - 1]) {
            vetor2[quant2++] = vetor[i];
        }
    }

    for(i=0;i<quant2;i++){
        cout << vetor2[i] << " ";
    }

    /*ideia
        fazer um vetor pra receber um elemento do vetor1
        ai fazer um verificação para ver se o elemento já existe no vetor
        se existir o vetor para de receber elementos
        contar quant2 ao mesmo tempo

    */


    return 0;
}