#include <iostream>

using namespace std;

void somar(float *var, float valor){
    *var += valor; //ele opera dentro do endereço da variavel
}
void ptar(float *v){
    v[0]=0;
    v[1]=0;
    v[2]=0;
    v[3]=0;
    v[4]=0;
}

int main() {
    float num=0;
    float vetor[5];

    somar(&num, 15);
    ptar(vetor);

    cout << num << "\n\n";

    for(int i=0;i<5;i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}

