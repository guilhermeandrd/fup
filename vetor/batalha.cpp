#include <iostream>

using namespace std;

int main() {
    int quant, i=0, somaim=0, somapa=0;

    cin >> quant;

    int vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
        if((vetor[i]%2)!=0){
            somaim += vetor[i];
        }else{
            somapa += vetor[i];
        }
    }

    if(somaim>somapa){
        cout << "soldados" << endl;
    }else if(somapa>somaim){
        cout << "rebeldes" << endl;
    }else{
        cout << "empate" << endl;
    }

    return 0;
}