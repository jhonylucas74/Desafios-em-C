# Desafio 2: Listando vetores de tamanhos diferentes

Antes de mais nada esse desafio é uma extensão do desafio 1, as vezes pode ser uma boa ideia iniciar do começo. 

O objetivo é criar dois vetores e listar o conteúdo de ambos. O primeiro ainda possui 5 posições, já o segundo deve possuir 10 posições. Para imprimir seus valores no terminal você ainda terá que utilizar a função **printar** criada por você anteriormente. Agora você tem um pequeno problema, a função criada sabe imprimir um vetor de 5 posições. E como ele vai imprimir os valores de um vetor de 10? Pense um pouco e modifique a função para que ela seja capaz de realizar essa tarefa. 

Para facilitar a análise dos resultados antes de chamar a função **printar** utilize o comando `printf("imprimindo vetor de 5 posições!\n")`  e de forma semelhante faça para o de 10.

## Para ajudar

Para auxiliar segue abaixo  alguns modelos da sintaxe do C. O código desse desafio já resolvido, caso precise tirar uma dúvida ele se encontra na pasta src.

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