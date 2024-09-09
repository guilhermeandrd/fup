#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;

    for(i=0;str[i]!='\0';i++);

    return i;
}

void gritar(char *str, int tamanho){
    int i=0;

    for(i=0;i<tamanho;i++){

        if(str[i]>64&&str[i]<91){//verificar se é maiscula
            str[i] = str[i] +32;           //somar 32
        }else if(str[i]>96&&str[i]<123){//verificar se é minuscula
            str[i] = str[i] -32;           //diminuir 32
        }
    }
}

int main() {
    char palavra[100];
    int tam;

    cin.getline(palavra, sizeof(palavra));

    tam = tamanho(palavra);

    gritar(palavra, tam);

    cout << palavra;


    return 0;
}