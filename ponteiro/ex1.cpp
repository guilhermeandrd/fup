#include <iostream>

using namespace std;

void lerMatriz(float **M, int nlin, int ncol){
    for(int i=0;i<nlin;i++)
        for(int j=0;j<ncol;j++)
            cin >> M[i][j];
}

float operarMatriz(float **M, int linha, char caract, int nlin, int ncol){
    float resultado=0;

    for(int i=0;i<nlin;i++)
            for(int j=0;j<ncol;j++)
                if(i==linha) resultado+= M[i][j];

    if(caract=='M'){
        resultado = resultado/(nlin*ncol);
    }

    return resultado;
}

int main() {
    float **M, resultado=0;
    char caract=' ';
    int nlin=12, ncol=12, linha=0;

    cin >> linha >> caract;

    M = (float **) malloc(nlin*sizeof(float *));
        for(int i=0;i<nlin;i++)
            M[i] = (float *) malloc(ncol*sizeof(float));

    lerMatriz(M, nlin, ncol);

    resultado = operarMatriz(M, linha, caract,nlin,  ncol);

    printf("%f.1", resultado);
    
    return 0;
}