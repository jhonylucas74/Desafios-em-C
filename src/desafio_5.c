#include <stdio.h> 

void soma_matriz(int v[][4], int v2[][4]){		

	for(int i = 0; i< 4 ; i++){
		for(int j = 0; j< 4 ; j++){
			printf("%d ", v[i][j] + v2[i][j]);	
		}
		printf("\n");
	}

}

int main(){

	int matriz[4][4] = {{ 2, 5, 9, 4 },
						{ 4, 5, 6, 3 },
						{ 4, 5, 6, 3 },
						{ 4, 5, 6, 3 }};
	
	int matriz2[4][4] = {{ 2, 5, 9, 4 },
				 		 { 4, 5, 6, 3 },
				 		 { 4, 5, 6, 3 },
						 { 4, 5, 6, 3 }};

	printf("imprimindo soma das matrizes!\n");
	soma_matriz(matriz,matriz2);

	return 0;
}