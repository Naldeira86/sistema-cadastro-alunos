/*
===============================================================================
PROJETO : Sistema de Cadastro de Alunos
AUTOR   : Ronaldo Siqueira
DATA    : 24/06/2026
VERSÃO  : 1.0
===============================================================================

DESCRIÇÃO:
Este programa realiza o cadastro de um aluno, armazenando suas informações
básicas, como nome, idade, matrícula e notas. Após a coleta dos dados,
o sistema calcula automaticamente a média aritmética das notas e informa
a situação acadêmica do aluno.

FUNCIONALIDADES:
- Cadastro do nome do aluno;
- Cadastro da idade;
- Cadastro do número de matrícula;
- Registro de duas notas;
- Cálculo da soma das notas;
- Cálculo da média aritmética;
- Exibição dos dados cadastrados;
- Verificação da situação do aluno.

CRITÉRIO DE APROVAÇÃO:
- Média maior ou igual a 6,0  -> APROVADO
- Média menor que 6,0         -> REPROVADO

ENTRADAS:
- Nome do aluno (texto);
- Idade (inteiro);
- Matrícula (inteiro);
- Nota 1 (real);
- Nota 2 (real).

SAÍDAS:
- Dados completos do aluno;
- Soma das notas;
- Média final;
- Situação acadêmica.

OBSERVAÇÕES:
- O programa utiliza estruturas (struct) para organizar os dados.
- O cálculo da média é realizado através da fórmula:

      média = (nota1 + nota2) / 2

- O separador decimal utilizado é o ponto (.),
  devido à configuração LC_NUMERIC = "C".

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
===============================================================================
ESTRUTURA: Aluno

Finalidade:
Armazenar todas as informações referentes a um aluno.

Campos:
- nome       : Nome completo do aluno.
- idade      : Idade do aluno.
- matricula  : Número de matrícula.
- nota1      : Primeira nota.
- nota2      : Segunda nota.
- media      : Média final calculada.
===============================================================================
*/
struct Aluno {
    char nome[50];
    int idade;
    int matricula;
    float nota1;
    float nota2;
    float media;
};

int main() {

    /*
    ===========================================================================
    CONFIGURAÇÃO DE LOCALIDADE

    LC_CTYPE   -> Permite exibição correta de caracteres acentuados.
    LC_NUMERIC -> Utiliza ponto (.) como separador decimal.
    ===========================================================================
    */
    setlocale(LC_CTYPE, "Portuguese");
    setlocale(LC_NUMERIC, "C");

    /*
    ===========================================================================
    DECLARAÇÃO DA VARIÁVEL PRINCIPAL
    ===========================================================================
    */
    struct Aluno aluno;

    /*
    ===========================================================================
    CADASTRO DOS DADOS
    ===========================================================================
    */

    printf("=================================\n");
    printf("      CADASTRO DE ALUNO\n");
    printf("=================================\n");

    printf("Nome: ");
    scanf(" %49[^\n]", aluno.nome);

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("Matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Nota 1: ");
    scanf("%f", &aluno.nota1);

    printf("Nota 2: ");
    scanf("%f", &aluno.nota2);

    /*
    ===========================================================================
    PROCESSAMENTO

    Calcula a média aritmética das duas notas informadas.
    ===========================================================================
    */
    aluno.media = (aluno.nota1 + aluno.nota2) / 2.0;

    /*
    ===========================================================================
    EXIBIÇÃO DOS RESULTADOS
    ===========================================================================
    */

    printf("\n=================================\n");
    printf("      DADOS DO ALUNO\n");
    printf("=================================\n");

    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d anos\n", aluno.idade);
    printf("Matricula: %d\n", aluno.matricula);

    printf("A soma das notas é: %.2f + %.2f = %.2f\n",
           aluno.nota1,
           aluno.nota2,
           aluno.nota1 + aluno.nota2);

    printf("Media: %.2f\n", aluno.media);

    /*
    ===========================================================================
    VERIFICAÇÃO DA SITUAÇÃO DO ALUNO
    ===========================================================================
    */
    if (aluno.media >= 6.0) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    printf("=================================\n");

    return 0;
}
