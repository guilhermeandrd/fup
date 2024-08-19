#include <iostream>

using namespace std;

void alcooOuGasolina(float gasolina, float alcool){
     if(gasolina < 1.3*alcool){
        cout << "Gasolina";
    }else{
        cout << "alcool";
    }
}

int main() {
    float gasolina=0, alcool=0;

    cin >> gasolina >> alcool;

    alcooOuGasolina(gasolina, alcool);
   

    return 0;
}