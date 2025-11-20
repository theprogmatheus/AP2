A diferença entre uma estrutura composta homogênea (vetor/array) e uma estrutura composta heterogênea (struct) é que:

- Uma estrutura composta **homogênea** é compostar por um único tipo de dado.

Exemplo:
```c
int v[20];
```
Nesse exemplo, vemos que o vetor comporta 20 valores, porém todos de um único tipo de dado `int`

- Uma estrutura composta **heterogênea** (struct) é composta por variados tipos de dados.

Exemplo:
```c
typedef struct {
    char nome[50];
    int idade;
    float tamanhoEmMetros;
} Pessoa;
```

Nesse exemplo, vemos que a struct comporta 3 valores (campos), um do tipo `vetor de caracteres` um do tipo `int` e um do tipo `float`.