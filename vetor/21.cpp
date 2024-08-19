#include <iostream>

using namespace std;

void lerVetor(int quant, int vetor[]){
    int i;

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }
}

int ajeitarVetor(int quant, int vetor[]){
    int i;
    int soma=0;

    for(i=0;i<quant;i++){
        if(vetor[i]==1){
            soma += 11;
        }else if(vetor[i]==11||vetor[i]==12||vetor[i]==13){
            soma += 10;
        }else{
            soma += vetor[i];
        }
    }

    return soma;
}

void calculo21(int quant, int vetor[], int soma){
    int i;

    for(i=0;i<quant;i++){
        if(soma>21&&vetor[i]==1){
            soma -=10;
        }
    }
}


int main() {
    int quant, i, soma=0, as=0;

    cin >> quant;

    int vetor[quant];

    lerVetor(quant, vetor);

    calculo21(quant, vetor, (ajeitarVetor(quant, vetor)));



    //leitura do vetor


    

   
    
    cout << soma << endl;

    return 0;
}