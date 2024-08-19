#include <iostream>

using namespace std;

//É IMPARES E NAO PRIMOS

int somaImpares(int inf, int sup){
    int soma;

    for(; inf<sup; inf){
        if(inf%2==1){
            soma += inf;
        }
    }

    return soma;

}

int main() {
    int sup=0, infer=0, soma;

    cin >> infer >> sup;

    soma = somaImpares(infer, sup);

    cout << soma;


    return 0;
}