#include <stdio.h> 

void printar(int *v, int n){		

	for(int i = 0; i< n ; i++){
		printf("%d\n",v[i]);
		v[i]++;
	}

}

int main(){

	int vetor[5] = {2, 5, 9, 9, 7};
	int vetor2[10] = {2, 5, 9, 9, 7, 4, 2, 5, 4, 6};

	printf("imprimindo vetor de 5 posições pela primeira vez!\n");
	printar(vetor, 5);

	printf("imprimindo vetor de 5 posições pela segunda vez!\n");
	printar(vetor, 5);

	return 0;
}