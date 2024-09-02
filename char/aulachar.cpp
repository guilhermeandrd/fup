#include <iostream>

using namespace std;

char upperCase(char c){
    int posicao=0;

    if(c >= 'a' && c <= 'z'){
        posicao = c - 'a';
        return 'A' + posicao;
    }else{
        printf("Não é uma letra minuscula!\n");
        return c;
    }

}

int main() {
    char c=' ';

    cin >> c;

    maiusculo = upperCase(c);
    if(maiusculo >= 'A' && maiusculo <= 'Z') cout << "Maiusculo "

    cout << "Maiusculo" << upperCase(c);
    return 0;
}