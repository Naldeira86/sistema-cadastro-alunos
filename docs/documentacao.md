# Documentação do Sistema de Cadastro de Alunos

**Versão:** 1.0  
**Autor:** Ronaldo Siqueira  
**Data:** 24/06/2026  

---

## 1. Visão Geral

O **Sistema de Cadastro de Alunos** é um programa desenvolvido na linguagem C que permite o registro e a análise de dados acadêmicos de um aluno. O sistema coleta informações pessoais e notas, calcula a média aritmética e determina se o aluno foi aprovado ou reprovado.

## 2. Arquitetura do Projeto

```
sistema-cadastro-alunos/
├── src/
│   └── main.c              # Código-fonte principal
├── docs/
│   └── documentacao.md     # Documentação completa
├── README.md               # Visão geral do projeto
└── LICENSE                 # Licença MIT
```

## 3. Funcionalidades

| Funcionalidade          | Descrição                                      |
|-------------------------|------------------------------------------------|
| Cadastro de nome        | Captura o nome completo do aluno               |
| Cadastro de idade       | Registra a idade em anos                       |
| Cadastro de matrícula   | Número único de identificação                  |
| Registro de notas       | Duas notas com ponto flutuante                 |
| Cálculo de soma         | Soma aritmética das duas notas                 |
| Cálculo de média        | Média = (nota1 + nota2) / 2                    |
| Exibição de dados       | Mostra todos os dados cadastrados              |
| Situação acadêmica      | Aprovado (média >= 6.0) ou Reprovado           |

## 4. Estruturas de Dados

### struct Aluno

```c
struct Aluno {
    char nome[50];      // Nome completo do aluno
    int idade;          // Idade em anos
    int matricula;      // Número de matrícula
    float nota1;        // Primeira nota
    float nota2;        // Segunda nota
    float media;        // Média final calculada
};
```

## 5. Fluxo do Programa

```
Início
  |
  v
Configurar locale (acentos + separador decimal)
  |
  v
Declarar variável do tipo struct Aluno
  |
  v
Solicitar e ler nome, idade, matrícula, nota1, nota2
  |
  v
Calcular média = (nota1 + nota2) / 2
  |
  v
Exibir dados cadastrados, soma e média
  |
  v
Verificar situação:
  |-- média >= 6.0 → "APROVADO"
  |-- média < 6.0  → "REPROVADO"
  |
  v
Fim
```

## 6. Compilação

### GCC (MinGW / Linux / WSL)

```bash
gcc -std=c99 -Wall -Wextra src/main.c -o cadastro
./cadastro
```

### Clang

```bash
clang -std=c99 -Wall -Wextra src/main.c -o cadastro
./cadastro
```

### Visual Studio (Windows)

Abra o **Developer Command Prompt** e execute:

```bash
cl src/main.c /Fe:cadastro.exe
cadastro.exe
```

## 7. Exemplo de Execução

```
=================================
      CADASTRO DE ALUNO
=================================
Nome: João Silva
Idade: 20
Matricula: 2024001
Nota 1: 7.5
Nota 2: 6.0

=================================
      DADOS DO ALUNO
=================================
Nome: João Silva
Idade: 20 anos
Matricula: 2024001
A soma das notas é: 7.50 + 6.00 = 13.50
Media: 6.75
Situacao: APROVADO
=================================
```

## 8. Dependências

- Compilador C padrão (C89, C99 ou superior)
- Biblioteca padrão: `stdio.h`, `stdlib.h`, `locale.h`
- Sistema operacional com suporte ao locale `Portuguese`

## 9. Observações Técnicas

- O programa usa `setlocale(LC_CTYPE, "Portuguese")` para exibir corretamente caracteres acentuados no terminal.
- O separador decimal é fixado como ponto (`.`) via `setlocale(LC_NUMERIC, "C")`, garantindo que `scanf` interprete corretamente as notas.
- O campo `nome` é lido com a máscara `%49[^\n]` para evitar estouro de buffer e permitir espaços.
- A média é calculada como `(nota1 + nota2) / 2.0` — a divisão por `2.0` (float) assegura resultado com ponto flutuante.

## 10. Possíveis Melhorias Futuras

- [ ] Suporte a múltiplos alunos (vetor/array)
- [ ] Persistência em arquivo (salvar/carregar)
- [ ] Menu interativo com opções (cadastrar, listar, buscar)
- [ ] Validação de entrada (notas entre 0 e 10, idade positiva)
- [ ] Cálculo de média ponderada
- [ ] Interface gráfica simples

## 11. Licença

Distribuído sob a licença MIT. Consulte o arquivo `LICENSE` para mais informações.
