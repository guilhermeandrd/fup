#include <iostream>

using namespace std;

char avanco(char c, int posicao){
    char saida=0;

    if(posicao<0){
        saida = c-posicao;
    }else if(c+posicao>123){
        
    }else{
        saida=c+posicao;
    }
    //há tres casos
    //quando o avanço é maior do que 0 e menor que 24 (tudo ok)
    //quando o resultado do avanço da maior do que seria uma letra do alfabeto
    //quando o avança é negativo
    

    return saida;
}

int main() {
    int  posicao=0;
    char c=0, saida=0;


    cin >> c >> posicao;

    saida = avanco(c,posicao);

    cout << saida << "\n";



    return 0;
}