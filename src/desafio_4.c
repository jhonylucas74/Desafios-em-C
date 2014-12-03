#include <stdio.h> 

void printar_matriz(int v[][4]){		

	for(int i = 0; i< 4 ; i++){
		for(int j = 0; j< 4 ; j++){
			printf("%d ",v[i][j]);	
		}
		printf("\n");
	}

}

int main(){

	int matriz[4][4] = {{ 2, 5, 9, 4 },
						{ 4, 5, 6, 3 },
						{ 4, 5, 6, 3 },
						{ 4, 5, 6, 3 }};

	printf("imprimindo a matriz!\n");
	printar_matriz(matriz);

	return 0;
}