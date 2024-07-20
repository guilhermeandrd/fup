#include <iostream>
#include <cmath>

using namespace std;

int comparaReais(float a, float b){
    if(fabs(a-b)  < 0.000001) return 1;
    else return 0;
}

float mediaNotas(){
    int n=-1;

    float nota=0.0, soma=0.0;

    cout << "Digite as notas dos alunos, uma por vez, e termine digitando -1." <<"\n\n";

    for(; !comparaReais(nota, -1);n++){
        soma += nota;
        cout << "Digite a nota do aluno: " << "\n";
        cin >> nota;
        n++;
    }

    if(n>0) return soma/n;
    else return 0.0;

}

int main() {
    float media = mediaNotas();

    cout << "Média das notas é: " << media << "\n";

    return 0;
}