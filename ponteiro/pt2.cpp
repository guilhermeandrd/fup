#include <iostream>

using namespace std;

int main() {

    int *p;
    int vetor[10];

    p=&vetor[0];//p=vetor;//p recebe o endereco do primeiro vetor
    *p=10;
    cout << "\n" << vetor[0] << "\n";

  /**(p+=1);
    cout << "\n" << p << "\n";

    *(p+=1);//p=vetor;//p recebe o endereco do primeiro vetor
    cout << "\n" << p << "\n";*/

    return 0;
}