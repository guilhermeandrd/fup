#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int quant, i=0, passo=0, meio=0;
    double mediana=0;

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
        meio = (quant/2)-1;
        mediana = (vetor[meio] + vetor[meio+1])/2.0;
    }else{
        meio = ((quant+1)/2)-1;
        mediana = vetor[meio]/0.0;
    }
    
    cout << setprecision(2) << fixed << mediana << "\n";

    //dois casos
        //se a quantidade de elementos for par
            //pegar os dois elementos do meio, somar e dividir por 2
        //se for impar
            //dividir a quantidade por 2, somar mais 1, e ai tenho o indice da mediana
    return 0;
}