#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;

    for(i=0;str[i]!='\0';i++);

    return i;
}

void soletrar(char *str, char *strSoletrada, int tam){
    int i=0;

    for(i=0;i<tam;i++){
        if(i=0){
            strSoletrada[i] = '[';
        }else if(i=tam-1){  
            strSoletrada[i] = ']';
        }else{
            strSoletrada[i] = str[i];
            strSoletrada[i+1] = '-';
            i++;
        }
    }

    strSoletrada[tam+tam] = '\0';
}

int main() {
    char palavra[100];
    char palavraSoletrada[100];
    int tam=0;

    cin.getline(palavra, sizeof(palavra));

    tam = tamanho(palavra);

    soletrar(palavra, palavraSoletrada,  tam);

    cout << palavraSoletrada << endl;

    return 0;
}