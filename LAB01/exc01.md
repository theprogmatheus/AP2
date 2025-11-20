Uma struct em C é uma estrutura de dados heterogênea. Uma struct em si é um novo tipo de dado, que comporta múltiplos tipos de dados, um exemplo de struct:

```c
typedef struct {
    char nome[50];
    int idade;
} Pessoa;
```
Nesse exemplo a struct Pessoa passar ser um tipo de dado "Pessoa" que armazena os campos nome (vetor de 50 caracteres) e idade (um inteiro).