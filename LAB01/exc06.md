Exemplos quanto à declaração, carga automática de variáveis, entrada e saída de valores em 
variáveis do tipo `struct`:

**Declaração de variável do tipo `struct`:**
```c
struct Pessoa p1;
```

> Consulte: [Exercício 2](exc02.md) 

**Carga automática de variável do tipo `struct`:**
```c
struct Pessoa p1 = {"Matheus", 26};
```
**Entrada e saída de valores em variáveis do tipo `struct`:**
```c
#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
}

int main()
{
    struct Pessoa p1;

    // Entrada de dados por scanf
    scanf("%s", p1.nome);
    scanf("%d", &p1.idade);

    // Saída de dados por printf

    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
}
```

> Você deve ter percebido que não foi usado o operador `&` para passar o endereço de `p1.nome`. Isso acontece porque a variável de um vetor é um ponteiro (endereço) para o primeiro elemento do vetor e não é necessário extrair o endereço com `&`. Mais a frente será explicado como funciona os ponteiros.