#include <iostream>

using namespace std;

void lerMatriz(int **M, int nlin, int ncol){
    for(int i=0;i<nlin;i++)
        for(int j=0;j<ncol;j++)
            cin >> M[i][j];
}

int main(){
    int **M;
    
    int nlin=2, ncol=3;
    /*cin>> nlin;
    cin>> ncol;*/
    
    M = (int **) malloc(nlin*sizeof(int*));
    if(M){
        for(int i=0;i<nlin;i++)
            M[i] = (int *) malloc(ncol*sizeof(int));
    }
    
    lerMatriz(M,nlin,ncol);
    
    return 0;
}