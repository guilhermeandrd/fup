#include <iostream>

using namespace std;

int main() {
    int maior=0, menor=0, i, soma=0;

    int vetor[5];

    for(i=0;i<5;i++){
        cin >> vetor[i];
    }
    
    maior = vetor[0];

    for(i=0;i<5;i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }

    menor = vetor[0];

    for(i=0;i<5;i++){
        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }

    soma = maior + menor;

    cout << soma << endl;

    return 0;
}