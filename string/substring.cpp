#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;

    for(i=0;str[i]!='\0';i++);

    return i;
}

void gerarSubstring(char *str, char *subStr, int tam, int posi1, int posi2){
    int i=0;

    for(i=0;i<posi2;i++){
        subStr[i] = str[i+posi1];
    }

    subStr[posi2] = '\0';

}

int main() {
    char palavra[100];
    char substring[100];
    int tam=0, posi1=0, posi2=0;

    cin.getline(palavra, sizeof(palavra));
    cin >> posi1 >> posi2;

    tam = tamanho(palavra);

    gerarSubstring(palavra, substring, tam, posi1, posi2);

    cout << substring << endl;


    return 0;
}