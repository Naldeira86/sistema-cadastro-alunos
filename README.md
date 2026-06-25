# Sistema de Cadastro de Alunos

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

Sistema simples em C para cadastro de alunos, com cálculo de média aritmética e verificação de situação acadêmica.

## Funcionalidades

- Cadastro de nome, idade e matrícula
- Registro de duas notas
- Cálculo da soma e média aritmética
- Exibição completa dos dados
- Verificação de aprovação (média >= 6.0)

## Estrutura do Projeto

```
sistema-cadastro-alunos/
├── src/
│   └── main.c          # Código-fonte principal
├── docs/
│   └── documentacao.md # Documentação completa
└── README.md           # Este arquivo
```

## Compilação e Execução

### Usando GCC (MinGW / Linux / WSL)

```bash
gcc src/main.c -o cadastro.exe
./cadastro.exe
```

### Usando qualquer compilador C padrão

```bash
cc src/main.c -o cadastro
./cadastro
```

## Requisitos

- Compilador C padrão (C89/C99 ou superior)
- Sistema com suporte a locale `Portuguese` (para acentos)

## Licença

Este projeto está licenciado sob a licença MIT - veja o arquivo [LICENSE](LICENSE) para detalhes.

---

**Autor:** Ronaldo Siqueira
