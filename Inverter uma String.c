#include <stdio.h>
#include <string.h>


int main(){
	int tam;
	char texto[100], aux;
	scanf("%s", &texto);
	tam = strlen(texto);
	
		for(int i = 0, j = tam - 1; i < j; i++,j--){
				aux = texto[i];
				texto[i] = texto[j];
				texto[j] = aux;
		}
			printf("%s", texto);
		
	return 0;
}
