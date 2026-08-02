#include <stdio.h>

int main(){
	int tam, limite;
	scanf("%d", &tam);
	
	int nums[tam];
	
	for(int i = 0; i < tam;i++){
		scanf("%d", &nums[i]);
	}
	limite = tam;
	
		for(int i = 0; i < limite; i++){
				if(nums[i] == 0){
					for(int k = i; k < limite - 1; k++){
						nums[k] = nums [k + 1];
					}
					nums[limite - 1] = 0;
					limite--;
					i--;
				}
			}
		
			for( int i = 0 ; i < tam; i++){
				printf("%d ", nums[i]);
			}
	return 0;
}
