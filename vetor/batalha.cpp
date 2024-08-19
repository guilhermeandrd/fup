#include <iostream>

using namespace std;

int lerVetor(int quant, int vetor[]){
    int i;
    int somaim=0, somapa=0;

   for(i=0;i<quant;i++){
        cin >> vetor[i];
        if((vetor[i]%2)!=0){
            somaim += vetor[i];
        }else{
            somapa += vetor[i];
        }
    }

    return somaim, somapa;
    
}

void verificador(int somaim, int somapa){

    if(somaim>somapa){
        cout << "soldados" << endl;
    }else if(somapa>somaim){
        cout << "rebeldes" << endl;
    }else{
        cout << "empate" << endl;
    }
}

int main() {
    int quant, i=0, somaim=0, somapa=0;

    cin >> quant;

    int vetor[quant];

    lerVetor(quant, vetor);

    

    


    return 0;
}