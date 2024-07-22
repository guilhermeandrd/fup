#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int quant,i=0,limite=0;
    double media=0, soma=0;

    cin >> quant;

    double vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
        soma += vetor[i];
    }

    media = soma/quant;
    limite = quant-1;

    cout << setprecision(2) << fixed << media << endl;

    for(i=0;i<quant;i++){
        if(vetor[i]<media){
            cout << "P ";
        }else if(vetor[i]==media){
            if(i==limite){
                cout << "M";
            }else{
             cout << "M ";    
            }
        }else{
            if(i==limite){
                cout << "G";
            }else{
                cout << "G ";
            }
        }
    }


    

    return 0;
}