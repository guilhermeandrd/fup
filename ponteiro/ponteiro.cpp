#include <iostream>

using namespace std;

void lerVetor(int *V, int tam){
    for(int i=0;i<tam;i++) cin >> *(V+i);//V[i];
}
int main() {
    int x,y;
    char *str=NULL;
    int V[5];
    int *p=NULL;
    
    //v=p;
    x=2;
    y=5;
    lerVetor(V, 5);
    str = (char *) malloc(10*sizeof(char));
    free(str);
    str = (char *) malloc(20*sizeof(char));
    /*p=&x;
    //cout << p;
    //*p=3;
    //cout << p;
    //p=&y;
    //cout << p;
    *p=10;*/

    return 0;
}