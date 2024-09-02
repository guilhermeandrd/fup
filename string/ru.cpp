#include <iostream>

using namespace std;

int tamanho(char *str){
    int i=0;

    for(i=0;str[i]!='\0';i++);

    return i;
}

void mulheresFila(char *str, int tam){
    int i=0;
    int m=0;

    for(i=0;i<tam;i++){
        if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117||str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85){
            cout << str[i];
        }
    }

}

void homensFila(char *str, int tam){
    int i=0;
    int h=0;

    for(i=0;i<tam;i++){
        if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117||str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85){
            
        }else if(str[i]!=32){
            cout << str[i];
        }
    }
}

/*char gerarFila(char *str, char *strMh, int tamMh,  int tam, int veri){
    int i=0;
    int e=0;

    if(veri==1){
        for(i=0;i<tamMh;i++){
            for(e=0;e<tam;e++){
                if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117||str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85){
                    strMh[e] = str[i];
                }
            }
        }
    }else{
        for(i=0;i<tamMh;i++){
            for(e=0;e<tam;e++){
                if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117||str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85){
                    
                }else if(str[i]!=32){
                     strMh[e] = str[i];
                }
            }
        }
    }
    
    return *strMh;
}*/



int main() {
    char ru[100], mulher[100], homem[100];
    int tam, tamM, tamH;

    cin.getline(ru, sizeof(ru));

    tam = tamanho(ru);

    mulheresFila(ru, tam);
    cout << endl;
    homensFila(ru, tam);

    //mulher = gerarFila(ru, mulher, tamM, tam, 1);







    return 0;
}