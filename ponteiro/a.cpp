#include <iostream>
#include <stdlib.h>

using namespace std;

void lerMatriz(int **M, int nlin, int ncol){
    for(int i=0;i<nlin;i++)
        for(int j=0;j<ncol;j++)
            cin >> M[i][j];
}

int verificarSimetrica(int **M, int nlin, int ncol){
    if(nlin != ncol) return 0; //se o numero de linhas for diferente do de colunas
    
    for(int i=0;i<nlin;i++)
        for(int j=i+1;j<ncol;j++)
            if(M[i][j]!=M[j][i]) return 0;
    
    return 1;
}


int main(){
    int **M;
    int nlin=0, ncol=0;
    
    cin >> nlin >> ncol;
    
    M = (int **) malloc(nlin*sizeof(int));
    if(M){
        for(int i=0;i<nlin;i++)
            M[i] = (int *) malloc(ncol*sizeof(int));
    }
    
    lerMatriz(M,nlin,ncol);
    
    if(verificarSimetrica(M, nlin, ncol)) cout << "sim" << endl;
    else cout << "nao" << endl;
    
    return 0;
}