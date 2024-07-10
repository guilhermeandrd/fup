#include <iostream>

using namespace std;

int main() {
    int quant1, quant2, i, soma=0;

    cin >> quant1;

    int vetor1[quant1];

    for(i=0;i<quant1;i++){
        cin >> vetor1[i];
    }

    cin >> quant2;

    int vetor2[quant2];

    for(i=0;i<quant2;i++){
        cin >> vetor2[i];
    }

    if(quant1!=quant2){
        cout << "Diferentes" << endl;
    }else{
        for(i=0;i<quant1;i++){
            if(vetor1[i]==vetor2[i]){
                //cout << vetor1[i] << "  " << vetor2[i] << "\n";
                soma +=1;
            }else{
                cout << "Diferentes" << endl;
                break;
            }
        }
    }

    if(soma==quant1){
        cout << "Iguais" << endl;
    }

    return 0;
}