#include <iostream>

using namespace std;

void duplicarStr(char *str, char *strDup) {
	int j=0,k=0;
	char aux[20];
	for(int i=0; str[i]!='\0'; i++) {
		if(str[i] == ' ') {
			int u=0;
			for(u=0;u<j;u++,k++) strDup[k] = aux[u];
			strDup[k] = ' ';
			for(u=0;u<j;u++,k++) strDup[k] = aux[u];
			j=0;
		} else {
			aux[j] = str[i];
			j++;
		}
	}
	strDup[k]='\0';
}

int main () {
	char str[100], strDup[1000];
	scanf("%[^\n]", str);
	duplicarStr(str,strDup);

	
	return 0;
}