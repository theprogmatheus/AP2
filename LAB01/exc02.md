Existem algumas formas de declarar uma struct em C, aqui vou apresentar duas:

Declaração Simples:
```c
struct Pessoa {
    char nome[50];
    int idade;
};
```

Declaração por typedef:

```c
typedef struct {
    char nome[50];
    int idade;
} Pessoa;
```

Note que apesar das semelhanças, existem algumas diferenças na hora de usar a struct.
Na declaração "simples" de uma struct você sempre vai precisar colocar a palavra-chave `struct` na frente das declarações. Por exemplo:
```c
struct Pessoa p;
```

Enquanto na declaração de struct por typedef, você já tem o tipo definido e não é necessário explicitar que é uma struct. Por exemplo:
```c
Pessoa p;
```
