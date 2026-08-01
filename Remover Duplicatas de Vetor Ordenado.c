#include <stdio.h>

int main(){
	int tam;
	
	scanf("%d", &tam);
	
	int nums[tam];
		
		for(int i = 0; i < tam; i++){
			scanf("%d", &nums[i]);
		}		
			for(int i = 0; i < tam; i++){
				for(int j = i+1; j < tam; j++){
					if(nums[i] == nums[j]){
						for(int k = j; k < tam - 1; k++){
							nums[k] = nums[k + 1];
						}
						j--;
						tam--;
				}	
			}
		}
		
			printf("Vetor final:\n");
			printf("%d\n", tam);
			
			for(int i = 0; i < tam; i++){
				printf("%d ", nums[i]);
			}
	return 0;
}
