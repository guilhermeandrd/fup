#include <iostream>

using namespace std;

int main() { 
    
    string veiculo="Carro";
    string *pv;

    pv=  &veiculo; //ponteiro pv recebe o endereço da variavel veiculo
    //alterar o seu valor por endereço da memoria
    //talvez de pra alterar mesmo quando nao seja global

    *pv = "Moto";//no endereco apontado por pv adcione o valor moto

    cout << pv << "\n" << &veiculo << "\n" << veiculo;
    
    return 0;
}