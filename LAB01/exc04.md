O operador de acesso aos campos de uma struct são:

Operador Simples: O operador `.` é usado para acessar os campos de uma struct.
```c
struct Pessoa p;

p.idade = 18;
```

Outro operador normalmente usado é o `->` que serve para acessar os campos de uma struct apontada por um ponteiro. (Sinceramente, você só deve se preocupar com isso quando aprenderem ponteiros em C)
```c
Pessoa *p;

p->idade = 18;
```

Note que esse operador só será usado em ponteiros para structs.
