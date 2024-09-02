#include <iostream>

using namespace std;

typedef struct{
		int matricula;
		char aprovado;
		char nome[100];
		float media;
		int ano;
} ALUNO;

ALUNO lerAluno(){
        ALUNO aux;

        cout << "Digite a matricula: ";
        cin >> aux.matricula;
        cout << "Digite o nome: ";
        cin >> aux.nome;
        cout << "Digite a media: ";
        cin >> aux.media;
        cout << "Digite o ano: ";
        cin >> aux.ano;

        return aux;
}

void imprimirAluno(ALUNO a){
    cout << "Matricula = \n" << a.matricula;
    cout << "Nome = \n" << a.nome;
    cout << "Média = \n" << a.media;
    cout << "Ano = \n" << a.ano;
    if(a.aprovado == 'A') cout << "APROVADO \n";
    else cout << "REPROVADO \n";

}

int main(){
		ALUNO a;

        a = lerAluno();
        imprimirAluno(a);
		
		
		
		return 0;
}
