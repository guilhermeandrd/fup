#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int quant, soma=0;
    float media=0;

    cin >> quant;

    float num[quant];

    int i;

    for(i=0;i<quant;i++){
        cin >> num[i];
    }

    for(i=0;i<quant;i++){
        soma += num[i];
    }

    media = soma/quant;

    cout << fixed << setprecision(2) << media << endl;

    return 0;
}