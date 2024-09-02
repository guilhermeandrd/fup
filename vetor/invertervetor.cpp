#include <iostream>

using namespace std;

int main() {
    int vetor[5] = {1,2,3,4,5};
    int i=0;

    for(i=5;i>=0;i--){
        vetor[i]=vetor[i-5];
    }

    for(i=0;i<5;i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}