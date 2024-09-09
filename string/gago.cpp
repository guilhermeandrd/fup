#include <iostream>

using namespace std;

int falaNormal(string *str){
    int i=0;

    for(i=0;str[i]!="\0";i++){
        cin >> str[i];
    }

    return i;
}

void ouveNorma(string *str, int tam){
    int i=0;

    for(i=0;i<tam;i++){
        cout << str[i];
        cout << "\0";
    }
}

int main() {
    string palavras[100];
    int tamanho;

   tamanho = falaNormal(palavras);

    ouveNorma(palavras, tamanho);

    return 0;
}