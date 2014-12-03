#include <stdio.h> 

void printar(int v[]){	

	for(int i = 0; i< 5 ; i++){
		printf("%d\n",v[i]);
	}

}

int main(){

	int vetor[5] = {2,5,9,9,7};	
	
	printar(vetor);	

	return 0;
}