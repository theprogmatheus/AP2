Existem algumas formas de atribuir valores a strings dentro de uma struct, alguns exemplos são:

**Por carga automática:**
```c
struct Pessoa p1 = {"Matheus", 26};
```

**Por scanf ou fgets:**
```c
struct Pessoa p1;

scanf("%s", p1.nome);
```
ou
```c
struct Pessoa p1;

fgets(p1.nome, sizeof(p1.nome), stdin);
```

**Por atribuição manual:**
```c
struct Pessoa p1;
strcpy(p1.nome, "Matheus");
```