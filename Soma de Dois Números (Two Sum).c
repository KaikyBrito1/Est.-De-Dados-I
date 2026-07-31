#include <stdio.h>

int main(){
	int tamanho;
	long target;
	
	scanf("%d", &tamanho);
	scanf("%ld", &target);
	
	int nums[tamanho];
	
	for(int i = 0;i < tamanho;i++){
		scanf("%d", &nums[i]);
	}
	for(int i = 0;i < tamanho;i++){
		for(int j = i+1; j < tamanho;j++){
			if(nums[i] + nums[j] == target){
				printf("%d %d", i , j);
			}
		}
		break;
	}
	
	
	return 0;
}
