#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;

    for(i=0;str[i]!='\0';i++);

    return i;
}

void inverterChar(char *str, int tam){
    int i=0;

    for(i=(tam-1);i>=0;i--){
        str[i]=str[tam-i];
    }

    for(i=0;i<tam;i++){
         cout << str[i] << "\n";
    }
}

int main() {
    char letra[100];
    int tam;

    cin.getline(letra, sizeof(letra));

    tam = tamanho(letra);

    char saida[tam];

    inverterChar;

    return 0;
}