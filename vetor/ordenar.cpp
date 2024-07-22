#include <iostream>

using namespace std;

int main(){
    int quant,i, maior=0, menor=0,inter=0, diferenca=0;
    
    cin >> quant;
    
    int vetor[quant];
    
    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }
    
    
    for(maior=0;maior<quant;maior++){
        for(i=0;i<quant;i++){
            if(vetor[i]>vetor[i+1]){
                inter = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = inter;
            }
        }
            
    }
    
    for(i=0;i<quant;i++){
        cout << vetor[i] << "\n";
    }
    
    return 0;
}