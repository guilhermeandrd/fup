#include <iostream>

using namespace std;

char lerVetorMensagem(char vetorMensagem[], int quant=0){
    int i;

    for(i=0;i<quant;i++){
        cin >> vetorMensagem[i];
    }
}

char lerVetorSubstituido(char vetorSubstituido[], int quant=0){
    int i;

    for(i=0;i<quant;i++){
        cin >> vetorSubstituido[i];
    }
}
char lerVetorSubstituinte(char vetorSubstituinte[], int quant=0){
    int i;

    for(i=0;i<quant;i++){
        cin >> vetorSubstituinte[i];
    }
}

char cripto(char vetor1[], char vetor2[], char vetor3[]){
    for(int i=50;i>0;i--){
        if (vetor1[i]==vetor2[i]){
            vetor1[i] == vetor3[i];
        }

    }
}
//acho que tem que fazer por vetor
//um vetor pra ler a entrada
//outro pra ler os substituidos
//outro pra ler os substituintes
//depois fazer um for pra ver se o elemento de um vetor é o mesmo elemento do substituidos, se for, substituir pelos substituintes

int main() {
    int n=50;

    char vetor1[n], vetor2[n], vetor3[n];

    lerVetorMensagem(vetor1, n);

    lerVetorSubstituido(vetor2, n);

    lerVetorSubstituinte(vetor3, n);

    cripto(vetor1, vetor2, vetor3);

    return 0;
}