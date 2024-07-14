#include <iostream>

using namespace std;

int main() {
    int quant, i=0, mediana=0, passo=0;

    cin >> quant;

    int vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    for(i=0;i<quant;i++){
        if(i>0){
            if(vetor[i-1]>vetor[i]){
                passo = vetor[i];
                vetor[i] = vetor[i-1];
                vetor[i-1] = passo;
            }
        }else if(i==(quant-1)){
            
        }
    }
    for(i=0;i<quant;i++){
        cout << vetor[i];
    }
    //dois casos
        //se a quantidade de elementos for par
            //pegar os dois elementos do meio, somar e dividir por 2
        //se for impar
            //dividir a quantidade por 2, somar mais 1, e ai tenho o indice da mediana
    return 0;
}