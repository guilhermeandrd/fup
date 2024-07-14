#include <iostream>

using namespace std;

int main() {
    int quant, total=0, i=0, sucessor=0, antecessor=0;

    cin >> quant;

    int vetor[quant];

    for(i=0;i<quant;i++){
        cin >> vetor[i];
    }

    for(i=0;i<quant;i++){
        if(vetor[i]==0){
            if(i==0){
                if(vetor[i+1]==0){
                    total += 1;
                 }
            }else if(i==(quant-1)){
                 if(vetor[i-1]==0){
                    total +=1;
                 }
            }else {
                if(vetor[i+1]==0&&vetor[i-1]==0){
                       total += 1;
                }
              }
         }
    }
       
    cout << total << endl;

    return 0;
}