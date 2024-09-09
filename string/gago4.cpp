#include<stdio.h>

void duplicarStr(char *str, char *strDup) {
	int j = 0, k = 0;
	char aux[100];  // Ajustei o tamanho do aux para 100 caracteres
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			int u = 0;
			// Copia a palavra do aux para strDup duas vezes
			for (u = 0; u < j; u++, k++) strDup[k] = aux[u];
			strDup[k] = ' ';
			k++;
			for (u = 0; u < j; u++, k++) strDup[k] = aux[u];
			j = 0;  // Reinicia o índice para armazenar a próxima palavra
		} else {
			aux[j] = str[i];  // Armazena os caracteres da palavra atual
			j++;
		}
	}
	// Copia a última palavra duas vezes (sem espaço após a última palavra)
	int u = 0;
	for (u = 0; u < j; u++, k++) strDup[k] = aux[u];
	strDup[k] = ' ';
	k++;
	for (u = 0; u < j; u++, k++) strDup[k] = aux[u];

	strDup[k] = '\0';  // Finaliza a string duplicada
}

int main () {
	char str[100], strDup[1000];
	//printf("Digite uma frase: ");
	scanf("%[^\n]", str);
	
	duplicarStr(str, strDup);  // Chama a função correta
	
	// Imprime a string duplicada
	printf("%s\n", strDup);

	return 0;
}
