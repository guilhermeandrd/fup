#include <iostream>

using namespace std;

int lenght(char *str){
    int i=0;

    for(i=0;str[i] != '\0';i++);

    return i;
}

int main() {
    char str[100];

    cout << "digite seu nome: ";
    cin >> str;

    cout << "tamanho = " << lenght(str);

    return 0;
}