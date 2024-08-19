#include <iostream>

using namespace std;

void verDiv(int n1, int n2){
    if((n1%3==0&&n2%3==0) || (n1%5==0&&n2%5==0)){
        cout << "sim";
    }else{
        cout << "não";
    }
}

int main() {
    int n1, n2;

    cin >> n1 >> n2;

    verDiv(n1, n2);

    return 0;
}