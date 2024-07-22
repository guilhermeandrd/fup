#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int quant, i=0, meio=0;
    float mediana=0.0, v1=0.0, v2=0.0, passo=0.0;

    cin >> quant;

    double vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    for(int e=0;e<quant;e++){
        for(i=0;i<quant;i++){
            if(vetor[i]>vetor[i+1]){
                passo = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = passo;
            }
         }
    }

    if((quant%2)==0){
        meio = (quant/2);
        v1 = vetor[meio];
        v2 = vetor[meio+1];
        mediana = (v1+v2)/2.0;
    }else{
        meio = ((quant+1)/2);
        mediana = vetor[meio];
    }
    
    cout << setprecision(1) << fixed << mediana << "\n";

    return 0;
}