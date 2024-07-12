#include <iostream>

using namespace std;

int main() {
    int quant, i, soma=0, as=0;

    cin >> quant;

    int vetor[quant];

    //leitura do vetor
    for(i=0;i<quant;i++){
        cin >> vetor[i];
        if(vetor[i]==1){
            soma += 11;
        }else if(vetor[i]==11||vetor[i]==12||vetor[i]==13){
            soma += 10;
        }else{
            soma += vetor[i];
        }
    }

   
    for(i=0;i<quant;i++){
        if(soma>21&&vetor[i]==1){
            soma -=10;
        }
    }
    cout << soma << endl;

    return 0;
}