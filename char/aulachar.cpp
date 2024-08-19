#include <iostream>

using namespace std;

char upperCase(char c){
    int posicao=0;

    if(c >= 'a' && c <= 'z'){
        posicao = c - 'a';
        return 'A' + posicao;
    }
    
}

int main() {
    char c='a';

    cout << c;
    return 0;
}