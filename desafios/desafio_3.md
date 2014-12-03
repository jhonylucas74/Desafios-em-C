# Desafio 3: Alterando os valores do vetor na função

Antes de mais nada esse desafio é uma extensão do desafio 1 e 2.

Dessa vez vamos esquecer  o vetor de tamanho 10. Para esse desafio você pode até apagar ele do seu código. Vamos fazer uma alteração na função **printar** de tal modo que após imprimir o valor de uma posição do vetor ela incremente  1 ao valor atual da posição. Chame a função **printar** duas vezes no main pra verificar se na segunda vez que ela é chamada está realmente alterando os valores do vetor.


## Para ajudar

Para auxiliar segue abaixo  alguns modelos da sintaxe do C. O código desse desafio já está resolvido. Caso precise tirar uma dúvida ele se encontra na pasta src.

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