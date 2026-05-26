#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).

    int tabuleiro[10][10] = {0};         // Inicializa o tabuleiro com 0 (vazio)
    char linha = 'A';                    // Variável para representar as linhas do tabuleiro
    int coluna = 0, i = 0, j = 0; // Variável para representar as colunas do tabuleiro

    printf("\n");
    printf("*** TABULEIRO BATALHA NAVAL ***\n\n");
    printf("    1 2 3 4 5 6 7 8 9 10\n");
    printf("   ---------------------\n");
    for (i = 0; (i < 10) && (linha <= 'J'); i++, linha++)
    {
        printf("%c | ", linha);
        for (j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //===================================================
    // Área para Posicionar Navios

    char letraNavio1, letraNavio2;            // Variável para armazenar a letra da linha do navio
    int numeroNavio1, numeroNavio2; // Variável para armazenar o número da coluna do navio
    

    printf("\n");
    printf("Posicione seu 1° Navio na Horizontal\n\n");

    printf("***Instruções de Posicionamento***\n\n");

    printf("1º Passo - Para posicionar o seu navio horizontal escolha uma linha entre A a J.\n");
    printf("   OBS: Apenas serão aceitos caracteres MAIÚSCULOS.\n");
    printf("Digite a linha para posicionar o navio: ");
    scanf(" %c", &letraNavio1);                          // Lê a letra para a linha do navio
    printf("\n");
    printf("2º Passo - Escolha uma casa entre as colunas 01 a 08 para posicionar a primeira parte do navio,\n");
    printf("   OBS: A segunda e terceira partes do navio serão posicionadas automaticamente a direita da primeira posição.\n");
    printf("AVISO! - Seu navio será identificado com o caractere (3) no tabuleiro.\n");
    printf("Digite a coluna para posicionar o navio: "); // Lê o número para a coluna do navio
    scanf("%d", &numeroNavio1);
    printf("\n\n");


    

    int indexlinhaNavio1 = letraNavio1 - 'A', indexColunaNavio1 = numeroNavio1 - 1; // Converte a letra para um índice numérico (0 para A, 1 para B, etc.)

    tabuleiro[indexlinhaNavio1][indexColunaNavio1] = 3; // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
    tabuleiro[indexlinhaNavio1][indexColunaNavio1 + 1] = 3;     // Posiciona a segunda parte do navio na horizontal
    tabuleiro[indexlinhaNavio1][indexColunaNavio1 + 2] = 3; // Posiciona a terceira parte do navio na horizontal

    if ((indexlinhaNavio1 >= 0 && indexlinhaNavio1 <= 9) && (indexColunaNavio1 >= 1 && indexColunaNavio1 <= 8))
    {
        printf("\n");
        printf("*** TABULEIRO BATALHA NAVAL ***\n\n");
        printf("    1 2 3 4 5 6 7 8 9 10\n");
        printf("   ---------------------\n");
        linha = 'A'; // Reinicia a variável para exibir o tabuleiro
        for (i = 0; i < 10 && linha <= 'J'; i++, linha++)
        {
            printf("%c | ", linha);
            for (j = 0; j < 10; j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    else
    {

        printf("                  ATENÇÃO: Posicionamento inválido!\n");
        printf("Certifique-se de que a linha está entre A e J e a coluna entre 1 e 8.\n");
        printf("   Certifique-se de que não ultrapasse os limites do tabuleiro.\n\n");
    }

    printf("\n");
    printf("Posicione seu 2° Navio na Vertical\n\n");

    printf("***Instruções de Posicionamento***\n\n");

    printf("1º Passo - Para posicionar o seu navio vertical Escolha uma LINHA entre A a H.\n");
    printf("   OBS: Apenas serão aceitos caracteres MAIÚSCULOS.\n");
    printf("Digite a linha para posicionar o navio: ");
    scanf(" %c", &letraNavio2);                          // Lê a letra para a linha do navio
    printf("\n");
    printf("2º Passo - Escolha uma Coluna entre 01 e 10 para posicionar a primeira parte do navio.\n");
    printf("   OBS: A segunda e terceira partes do navio serão posicionadas automaticamente a baixo da primeira posição.\n");
    printf("AVISO! - Seu navio será identificado com o caractere (3) no tabuleiro.\n");    
    printf("Digite a coluna para posicionar o navio: "); // Lê o número para a coluna do navio
    scanf("%d", &numeroNavio2);
    printf("\n\n");

    int indexlinhaNavio2 = letraNavio2 - 'A', indexColunaNavio2 = numeroNavio2 - 1; // Converte a letra para um índice numérico (0 para A, 1 para B, etc.)

    tabuleiro[indexlinhaNavio2][indexColunaNavio2] = 3;     // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
    tabuleiro[indexlinhaNavio2 + 1][indexColunaNavio2] = 3; // Posiciona a segunda parte do navio na horizontal
    tabuleiro[indexlinhaNavio2 + 2][indexColunaNavio2] = 3; // Posiciona a terceira parte do navio na horizontal

    if ((indexlinhaNavio2 >= 1 && indexlinhaNavio2 <= 8) && (indexColunaNavio2 >= 0 && indexColunaNavio2 <= 9))
    {
        printf("\n");
        printf("*** TABULEIRO BATALHA NAVAL ***\n\n");
        printf("    1 2 3 4 5 6 7 8 9 10\n");
        printf("   ---------------------\n");
        linha = 'A'; // Reinicia a variável para exibir o tabuleiro
        for (i = 0; i < 10 && linha <= 'J'; i++, linha++)
        {
            printf("%c | ", linha);
            for (j = 0; j < 10; j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    else
    {

        printf("                  ATENÇÃO: Posicionamento inválido!\n");
        printf("Certifique-se de que a linha está entre A e H e a coluna entre 1 e 10.\n");
        printf("   Certifique-se de que não ultrapasse os limites do tabuleiro.\n\n");
    }

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
