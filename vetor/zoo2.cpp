#include <iostream>

using namespace std;

int main() {
    int quant1, i=0, passo=0, n=0;

    cin >> quant1;

    int vetor[quant1];

    for(i=0;i<quant1;i++){
        cin >> vetor[i];
    }

    for(int e=0;e<quant1;e++){
        for(i=0;i<quant1;i++){
            if(vetor[i]>vetor[i+1]){
                passo = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = passo;
            }
        }
    }

    for(i=0;i<quant1;i++){
        //if(vetor[i] != 0){
        cout << vetor[i] << " ";
        //}
    }

    for(i=0;i<quant1;i++){
        if(i!=(quant1-1)){
            n = vetor[i];
            if((n-vetor[i+1])==0){
                vetor[i] = 0;
            }
        }
    }

    for(i=0;i<quant1;i++){
        if(vetor[i] != 0){
            cout << vetor[i] << " ";
        }
    }

    return 0;
}