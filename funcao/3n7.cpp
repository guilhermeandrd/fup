#include <iostream>

using namespace std;

int somaDe3(int quant){
    int n=0, soma=0;
    
    while(quant>0){
        if(n%3==0&&n%7!=0){
            soma += n;
            quant--;
        }
        n++;
    }

    return soma;
}

int main() {
    int quant, soma=0;

    cin >> quant;

    soma = somaDe3(quant);

    cout << soma;

    return 0;
}