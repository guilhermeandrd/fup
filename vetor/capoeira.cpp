#include <iostream>

using namespace std;

int main() {
    int quant,i,i2=0,n1=0;

    cin >> quant;

    int vetor1[quant];

    n1 = quant+1;

    for(i=quant;i>0;i--){
        cin >> vetor1[i];
    }

    for(i=1;i<n1;i++){
         if(vetor1[i]==1){
            cout << vetor1[i];
            break;
        }
        cout << vetor1[i] << " ";
    }

    return 0;
}