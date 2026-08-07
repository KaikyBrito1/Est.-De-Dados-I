#include <stdio.h>

int main(){
	int tam;
	int aux;
	scanf("%d",&tam);
	
	int nums[tam];
	
	for(int i = 0; i < tam; i++){
		scanf("%d", &nums[i]);
	}
	
		for(int i = 0; i<tam; i++){
			int qtd = 0;
			for(int j = 0; j<tam;j++){
				if(nums[i] == nums[j]){
					qtd++;
					}
				}
			
			if( qtd > tam/2){
				aux = nums[i];
				break;
			
			}
		}
				printf("%d",aux);
		
	return 0;
}
