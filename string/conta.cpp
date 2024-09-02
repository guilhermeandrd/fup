#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;

    for(i=0; str[i]!= '\0';i++);

    return i;
}

int quant(char *str, int tamanho, char letra){
    int i=0;
    int quant=0;

    for(i=0;i<tamanho;i++){
        if(str[i] == letra){
            quant ++;
        }
    }

    return quant;
}

int main() {
    char str[100], letra =' ';
    int tam=0, quantidade=0;

    cin >> str;

    cin >> letra;

    tam = tamanho(str);

    quantidade = quant(str, tam, letra);

    cout << quantidade;

    return 0;
}