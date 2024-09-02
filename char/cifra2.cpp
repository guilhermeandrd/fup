#include <iostream>

using namespace std;

char cripto(char c1, char c2){

    c2 = c2-c1;

    c1 = c1+c2;

    return c1 ;
}

int main() {
    char c1=' ', c2 = ' ', saida;

    saida = cripto(c1, c2);
    
    return 0;
}