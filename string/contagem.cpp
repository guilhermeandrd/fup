#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;

    for(i=0;str[i]!='\0';i++);

    return i;
}

int contar(char *str, char letra, int tam){
    int saida=0, i=0;

    for(i=0;i<tam;i++){
        if(letra<91){
            if(str[i]==letra){
                saida++;
            }else if(str[i]=letra+32){
                saida++;
            }
        }else{
            if(str[i]==letra){
                saida++;
            }else if(str[i]=letra-32){
                saida++;
            }
        }
    }

    return saida;
}

int main() {
    char palavra[100], letra =' ';
    int tam=0;
    int saida=0;

    cin.getline(palavra, sizeof(palavra));

    cin >> letra;

    tam = tamanho(palavra);

    saida = contar(palavra, letra, tam);

    cout << saida << endl;

    return 0;
}