#include <iostream>

using namespace std;

void lerMatriz(int **M){
    for(int e=0;e<4;e++)
        for(int i=0;i<5;i++)
            cin >> M[e][i];
}

int main() {
    int **M;//linha matriz
    int nlin=0, ncol=0;

    int M[nlin][ncol];
    //int M[4][5];//4 linhas e 5 colunas x, y

    //matrizes é uma sequencia de vetores
    //nao se esquecer de contar os zeros
    
    M = (int **) malloc(4* sizeof(int* ));//sizeof = o quanto precisar de espaço/int ** pois é o tipo de dado do M/aloca memoria para o vetor de ponteiros, um para cada linha da matriz
    //M[0] =  (int *) malloc(5*sizeof(int));//*(M+1)=M[0]
    
    if( M!=NULL){
        for(int i=0;i<4;i++)
            M[i] = (int *) malloc(5*sizeof(int)); // aloca memoria para cada linha matriz
        //cin >> v[0][0];
    }

    lerMatriz(M);
       
    //para i de 0 ate n-1 faca
        //free(M[i]);
    //free(M);

    return 0;
}