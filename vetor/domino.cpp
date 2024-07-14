#include <iostream>

using namespace std;

int main() {
    int quant, i=0, ok=1;

    cin >> quant;

    int vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    for(i=0;i<quant;i++){
        if(i==(quant-1)){
            break;
        }else{
            if(vetor[i+1]<vetor[i]){
                ok = 0;
            }
        }
    }

    if(ok==0){
        cout << "precisa de ajuste" << endl;
    }else{
        cout << "ok" << endl;
    }
    return 0;
}