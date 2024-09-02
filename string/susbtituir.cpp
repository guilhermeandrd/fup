#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;

    for(i=0;str[i]!='\0';i++);

    return i;
}

void substituir(char *str, int tam){
    int i=0;

    for(i=0;i<tam;i++){
        if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117||str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85){
            str[i]='v';
        }else if(str[i]!=32){
            str[i]='c';
        }
    }
}
int main() {
    char palavra[100];
    //char palavraTrocada[100];
    int tam=0;

    cin.getline(palavra, sizeof(palavra));

    tam = tamanho(palavra);

    substituir(palavra, tam);

    cout << palavra << endl;

    return 0;
}