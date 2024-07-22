#include <iostream>
using namespace std;

int main(){
    int quant, i=0;
    
    cin >> quant;
    
    int vetor[quant];
    
    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }
    
    for(i=0;i<quant; i++){
        cout << vetor[i];
    }
}