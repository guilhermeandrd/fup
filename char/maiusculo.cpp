#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char carac;
    int size=26, i=0;
    char vetor1[size] = {'a','b','c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z'};
    char vetor2[size] = {'A','B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z'};


    cin >> carac;
    if (isalpha(carac)){
        for(i=0;i<size;i++){
            if(vetor1[i]==carac){
                carac = vetor2[i];
                break;
            }
            if(vetor2[i]==carac){
                carac = vetor1[i];
                break;
            }
        }
    }else{
        carac = carac;
    }

    cout << carac << endl;

    
    return 0;
}