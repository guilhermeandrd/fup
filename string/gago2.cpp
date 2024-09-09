#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;
    
    for(i=0;str[i]!='\0';i++);
    
    return i;
}

void gaguejar2(char *str, char *substr, int tam){
    
}

void gaguejar(char *str, char *substr, int tam){
    int i=0, e=0,o=0,u=0;

    for(i=0;i<tam;i++){
        substr[e++] = str[i];
        u++;
        
        if(str[i]==32){
            for(o=0;o<i;o++){
                substr[e++] = substr[o];
            }
            substr[e++] = 32;
            u=0;
            //break;
            
            //para a minha primeira palavra ele da certo, entao eu tenho que passar um novo parametro pra ele saber onde tem que parar, como seria isso?
            //e se eu fizer o char de maneira que cada palavra seja um vetor?
            //if stri[i]==32
            //entao se gera um novo vetor ate chegar o novo espaço
            //como seria pra calcular o tamanho?
            //teria que ler o i ate vir um espaço e retornar o i
            //teria que ter um vetor de tamanhos ok
        }
        
    }
    
    substr[e++] = '\0';
}

int main(){
    char palavra[100];
    char palavraGaguejada[100];
    int tam[100], quantidade=0;
    
    cin.getline(palavra, sizeof(palavra));
    
    quantidade = tamanho(palavra);
    
    gaguejar(palavra, palavraGaguejada, tam);
    
    cout << palavraGaguejada;
    
    return 0;
}