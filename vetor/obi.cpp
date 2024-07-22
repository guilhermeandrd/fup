#include <iostream>

using namespace std;

int main() {
    int quant=0, i=0, soma=0;

    cin >> quant;

    int vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    for(i=0;i<quant;i++){
        if(i!=(quant-2)){
            if(vetor[i]==1){
                if(vetor[i+1]==0){
                    if(vetor[i+2]==0){
                        soma += 1;
                    }
                }
            }
        }
    }

    cout << soma << endl;
    
    return 0;
}