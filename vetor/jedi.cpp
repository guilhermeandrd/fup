#include <iostream>

using namespace std;

int main() {
    int tam, i, metade1=0, soma1=0, somatotal=0,soma2=0;

    cin >> tam;

    metade1 = tam/2;

    int vetor[tam];

    for(i=0;i<tam;i++){
        cin >> vetor[i];
    }

    i=0;
    while(i<metade1){
        soma1 += vetor[i];
        i++;
    }
    
    for(i=0;i<tam;i++){
        somatotal += vetor[i];
    }

    soma2 = somatotal - soma1;
    
    if(soma1>soma2){
        cout << "Jedi";
    }else if(soma2>soma1){
        cout << "Stih";
    }else{
        cout << "Empate";
    }

    return 0;
}