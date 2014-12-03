# Desafio 1: Criar um vetor e listar seu conteúdo

O objetivo é criar um vetor que possua  5 índices, e ao criar adicionaremos valores para cada uma de suas posições. Feito isso o próximo passo é criar uma função cujo nome será **printar**. Essa função será responsável por imprimir no terminal os valores do nosso vetor.

## Para ajudar

Para auxiliar segue abaixo  alguns modelos da sintaxe do C;

```c
#include <stdio.h> 

int main(){

	//Seu código aqui

	return 0;
}
```

```c
int variavel[4] = { 1, 4, 2, 4 };
```

```c
int variavel[4];

variavel[0] = 1;
variavel[1] = 4;
variavel[2] = 2;
variavel[3] = 4;
```

```c
void imprimir(int v){
    printf("%d \n",v);
}
```

```c
for(int i = 0; i<4; i++){
    printf("%d \n",i);
}
```