# Desafio 4: Trabalhando com matriz e funções

Nesse desafio vamos trabalhar com vetores de duas dimensões, mais conhecido como vetores. Vamos fazer algo bem simples aqui. O objetivo é apenas criar um vetor de tamanho 4x4 , preenchê-lo com valores, criar um função com o nome **printar_matriz** que tem a tarefa de imprimir na tela no console dos os valores dessa matriz.

## Para ajudar

Para auxiliar segue abaixo  alguns modelos da sintaxe do C. O código desse desafio já está resolvido. Caso precise tirar uma dúvida ele se encontra na pasta src.

```c
int variavel[3][3] = { { 1, 2, 3},{ 1, 2, 3 } };
```

```c
int variavel[2][2];

variavel[0][0] = 1;
variavel[0][1] = 2;
variavel[1][0] = 1;
variavel[1][1] = 2;
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