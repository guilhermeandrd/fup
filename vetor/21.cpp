#include <iostream>

using namespace std;

int main() {
    int quant, i, soma=0;

    cin >> quant;

    int vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    for(i=0;i<quant;i++){
        if(soma>21){
            if(vetor[i]==11){
                vetor[i] = 1;
                soma += vetor[i];
            }else{
                soma += vetor[i];
            }
        }else{
            soma += vetor[i];
        }
    }


    cout << soma << endl;

    return 0;
}