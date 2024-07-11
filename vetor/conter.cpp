#include <iostream>

using namespace std;

int main() {
    int quant1, quant2, i, n1=0, i2, tentativas=0;

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
    
    /*for(i=0;i<quant1;i++){
        n1 = vetor1[i];
        cout << n1 << "\n";
        for(i=0;i<quant2;i++){
            if(n1==vetor2[i]){
                tentativas +=1;
                cout << tentativas << endl;
            }
        }
    }*/

    for(i=0;i<quant2;i++){
        n1 = vetor2[i];
        //cout << "n1 é igual a " << n1 << "\n";
        for(i2=0;i2<quant1;i2++){
            //cout << "n1 é igual a " << n1 << "\n";
            if(n1==vetor1[i2]){
                tentativas +=1;
                break;
                cout << tentativas << endl;
            }
        }
    }
    //se eu comparar  menor com o maior, pode ocorrer de o menor ser valor lixo, o numero de tentativas, 

    if(tentativas==quant1){
        cout << "sim" << endl;
    }else{
        cout << "não" << endl;
    }

    return 0;
}