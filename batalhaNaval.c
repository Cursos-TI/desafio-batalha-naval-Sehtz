#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).

    int tabuleiro[LINHAS][COLUNAS] = {0}; // Inicializa o tabuleiro com 0 (vazio)
    char X = 'A';                         // Variável para representar as linhas do tabuleiro
    int Y = 1, i = 0, j = 0;              // Variável para representar as colunas do tabuleiro

    printf("\n");
    printf("*** TABULEIRO BATALHA NAVAL ***\n\n");
    printf("    1 2 3 4 5 6 7 8 9 10\n");
    printf("   ---------------------\n");
    for (i = 0; (i < LINHAS) && (X <= 'J'); i++, X++)
    {
        printf("%c | ", X);
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("==========================================================================\n");

    //===================================================
    // Área para Posicionar Navios

    char linhaH, linhaV, linhaD1, linhaD2;    // Variável para armazenar a letra da linha do navio
    int ColunaH, ColunaV, ColunaD1, ColunaD2; // Variável para armazenar o número da coluna do navio

    printf("\n");
    printf("Posicione seu 1° Navio na Horizontal\n\n");

    printf("***Instruções de Posicionamento***\n\n");

    printf("1º Passo - Para posicionar o seu navio horizontal escolha uma linha entre A a J.\n");
    printf("   OBS: Apenas serão aceitos caracteres MAIÚSCULOS.\n");
    printf("Digite a linha para posicionar o navio: ");
    scanf(" %c", &linhaH); // Lê a letra para a linha do navio
    printf("\n");
    printf("2º Passo - Escolha uma casa entre as colunas 01 a 08 para posicionar a primeira part do navio,\n");
    printf("   OBS: A segunda e terceira partes do navio serão posicionadas automaticamente a direita da primeira posição.\n");
    printf("AVISO! - Seu navio será identificado com o caractere (3) no tabuleiro.\n");
    printf("Digite a coluna para posicionar o navio: "); // Lê o número para a coluna do navio
    scanf("%d", &ColunaH);
    printf("\n\n");
    printf("==========================================================================\n");

    int indexlinhaNavio1 = linhaH - 'A', indexColunaNavio1 = ColunaH - 1; // Converte a letra para um índice numérico (0 para A, 1 para B, etc.)

    tabuleiro[indexlinhaNavio1][indexColunaNavio1] = 3;     // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
    tabuleiro[indexlinhaNavio1][indexColunaNavio1 + 1] = 3; // Posiciona a segunda parte do navio na horizontal
    tabuleiro[indexlinhaNavio1][indexColunaNavio1 + 2] = 3; // Posiciona a terceira parte do navio na horizontal

    if ((indexlinhaNavio1 >= 0 && indexlinhaNavio1 <= 9) && (indexColunaNavio1 >= 1 && indexColunaNavio1 <= 7))
    {
        printf("\n");
        printf("*** TABULEIRO BATALHA NAVAL ***\n\n");
        printf("    1 2 3 4 5 6 7 8 9 10\n");
        printf("   ---------------------\n");
        X = 'A'; // Reinicia a variável para exibir o tabuleiro
        for (i = 0; i < LINHAS && X <= 'J'; i++, X++)
        {
            printf("%c | ", X);
            for (j = 0; j < COLUNAS; j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
        printf("==========================================================================\n");
    }
    else
    {

        printf("                  ATENÇÃO: Posicionamento inválido!\n");
        printf("Por favor, verifique as instruções de posicionamento e tente novamente.\n");
        printf("==========================================================================\n");
        return 1;
    }

    // POSICIONAMENTO DO SEGUNDO NAVIO
    printf("\n");
    printf("Posicione seu 2° Navio na Vertical\n\n");

    printf("***Instruções de Posicionamento***\n\n");

    printf("1º Passo - Para posicionar o seu navio vertical Escolha uma LINHA entre A a H.\n");
    printf("   OBS: Apenas serão aceitos caracteres MAIÚSCULOS.\n");
    printf("Digite a linha para posicionar o navio: ");
    scanf(" %c", &linhaV); // Lê a letra para a linha do navio
    printf("\n");
    printf("2º Passo - Escolha uma Coluna entre 01 e 10 para posicionar a primeira parte do navio.\n");
    printf("   OBS: A segunda e terceira partes do navio serão posicionadas automaticamente a baixo da primeira posição.\n");
    printf("AVISO! - Seu navio será identificado com o caractere (3) no tabuleiro.\n");
    printf("Digite a coluna para posicionar o navio: "); // Lê o número para a coluna do navio
    scanf("%d", &ColunaV);
    printf("\n\n");
    printf("==========================================================================\n");

    if (linhaV > 'H' && ColunaV > 10 && ColunaV < 1)
    {
        printf("                  ATENÇÃO: Posicionamento inválido!\n");
        printf("Por favor, verifique as instruções de posicionamento e tente novamente.\n");
        printf("==========================================================================\n");
        return 1;
    }

    int indexlinhaNavio2 = linhaV - 'A', indexColunaNavio2 = ColunaV - 1; // Converte a letra para um índice numérico (0 para A, 1 para B, etc.)

    if (tabuleiro[indexlinhaNavio2][indexColunaNavio2] == 0 &&     // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
        tabuleiro[indexlinhaNavio2 + 1][indexColunaNavio2] == 0 && // Posiciona a segunda parte do navio na horizontal
        tabuleiro[indexlinhaNavio2 + 2][indexColunaNavio2] == 0)
    {
        tabuleiro[indexlinhaNavio2][indexColunaNavio2] = 3;     // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
        tabuleiro[indexlinhaNavio2 + 1][indexColunaNavio2] = 3; // Posiciona a segunda parte do navio na horizontal
        tabuleiro[indexlinhaNavio2 + 2][indexColunaNavio2] = 3; // Posiciona a terceira parte do navio na horizontal

        printf("\n");
        printf("*** TABULEIRO BATALHA NAVAL ***\n\n");
        printf("    1 2 3 4 5 6 7 8 9 10\n");
        printf("   ---------------------\n");
        X = 'A'; // Reinicia a variável para exibir o tabuleiro
        for (i = 0; i < LINHAS && X <= 'J'; i++, X++)
        {
            printf("%c | ", X);
            for (j = 0; j < COLUNAS; j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
        printf("==========================================================================\n");
    }
    else
    {
        printf("                  ATENÇÃO: Posicionamento inválido!\n");
        printf("Por favor, verifique as instruções de posicionamento e tente novamente.\n");
        printf("==========================================================================\n");
        return 1;
    }
    printf("\n\n");

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // POSICIONAMENTO DO TERCEIRO NAVIO DIAGONAL (DA ESQUERDA PARA A DIREITA)
    printf("\n");
    printf("Posicione seu 3° Navio na Diagonal (DA ESQUERDA PARA A DIREITA)\n\n");

    printf("***Instruções de Posicionamento***\n\n");

    printf("1º Passo - Para posicionar o seu navio na Diagonal Escolha uma LINHA entre A a H.\n");
    printf("   OBS: Apenas serão aceitos caracteres MAIÚSCULOS.\n");
    printf("Digite a linha para posicionar o navio: ");
    scanf(" %c", &linhaD1); // Lê a letra para a linha do navio
    printf("\n");
    printf("2º Passo - Escolha uma Coluna entre 01 e 08 para posicionar a primeira parte do navio.\n");
    printf("   OBS: A segunda e terceira partes do navio serão posicionadas automaticamente a baixo e direita da primeira posição.\n");
    printf("AVISO! - Seu navio será identificado com o caractere (3) no tabuleiro.\n");
    printf("Digite a coluna para posicionar o navio: "); // Lê o número para a coluna do navio
    scanf("%d", &ColunaD1);
    printf("\n\n");
    printf("==========================================================================\n");

    if (linhaD1 > 'H' && ColunaD1 > 8 && ColunaD1 < 1)
    {
        printf("                  ATENÇÃO: Posicionamento inválido!\n");
        printf("Por favor, verifique as instruções de posicionamento e tente novamente.\n");
        printf("==========================================================================\n");
        return 1;
    }
    else
    {

        int indexlinhaNavio3 = linhaD1 - 'A', indexColunaNavio3 = ColunaD1 - 1; // Converte a letra para um índice numérico (0 para A, 1 para B, etc.)

        if (tabuleiro[indexlinhaNavio3][indexColunaNavio3] == 0 &&         // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
            tabuleiro[indexlinhaNavio3 + 1][indexColunaNavio3 + 1] == 0 && // Posiciona a segunda parte do navio na diagonal
            tabuleiro[indexlinhaNavio3 + 2][indexColunaNavio3 + 2] == 0)
        {
            tabuleiro[indexlinhaNavio3][indexColunaNavio3] = 3;         // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
            tabuleiro[indexlinhaNavio3 + 1][indexColunaNavio3 + 1] = 3; // Posiciona a segunda parte do navio na diagonal
            tabuleiro[indexlinhaNavio3 + 2][indexColunaNavio3 + 2] = 3; // Posiciona a terceira parte do navio na diagonal

            printf("\n");
            printf("*** TABULEIRO BATALHA NAVAL ***\n\n");
            printf("    1 2 3 4 5 6 7 8 9 10\n");
            printf("   ---------------------\n");
            X = 'A'; // Reinicia a variável para exibir o tabuleiro
            for (i = 0; i < LINHAS && X <= 'J'; i++, X++)
            {
                printf("%c | ", X);
                for (j = 0; j < COLUNAS; j++)
                {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }
            printf("\n\n");
            printf("==========================================================================\n");
        }
        else
        {
            printf("                  ATENÇÃO: Posicionamento inválido!\n");
            printf("Por favor, verifique as instruções de posicionamento e tente novamente.\n");
            printf("==========================================================================\n");
            return 1;
        }
        printf("\n\n");
    }

    // POSICIONAMENTO DO QUARTO NAVIO DIAGONAL (DA DIREITA PARA A ESQUERDA)

    printf("\n");
    printf("Posicione seu 4° Navio na Diagonal (DA DIREITA PARA A ESQUERDA)\n\n");

    printf("***Instruções de Posicionamento***\n\n");

    printf("1º Passo - Para posicionar o seu navio na Diagonal Escolha uma LINHA entre A a H.\n");
    printf("   OBS: Apenas serão aceitos caracteres MAIÚSCULOS.\n");
    printf("Digite a linha para posicionar o navio: ");
    scanf(" %c", &linhaD2); // Lê a letra para a linha do navio
    printf("\n");
    printf("2º Passo - Escolha uma Coluna entre 03 e 10 para posicionar a primeira parte do navio.\n");
    printf("   OBS: A segunda e terceira partes do navio serão posicionadas automaticamente ABAIXO e ESQUERDA da primeira posição.\n");
    printf("AVISO! - Seu navio será identificado com o caractere (3) no tabuleiro.\n");
    printf("Digite a coluna para posicionar o navio: "); // Lê o número para a coluna do navio
    scanf("%d", &ColunaD2);
    printf("\n\n");
    printf("==========================================================================\n");

    if (linhaD2 > 'H' && ColunaD2 > 10 && ColunaD2 < 3)
    {
        printf("                  ATENÇÃO: Posicionamento inválido!\n");
        printf("Por favor, verifique as instruções de posicionamento e tente novamente.\n");
        printf("==========================================================================\n");
        return 1;
    }
    else
    {

        int indexlinhaNavio4 = linhaD2 - 'A', indexColunaNavio4 = ColunaD2 - 1; // Converte a letra para um índice numérico (0 para A, 1 para B, etc.)

        if (tabuleiro[indexlinhaNavio4][indexColunaNavio4] == 0 &&         // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
            tabuleiro[indexlinhaNavio4 + 1][indexColunaNavio4 - 1] == 0 && // Posiciona a segunda parte do navio na diagonal
            tabuleiro[indexlinhaNavio4 + 2][indexColunaNavio4 - 2] == 0)
        {
            tabuleiro[indexlinhaNavio4][indexColunaNavio4] = 3;         // Posiciona o navio no tabuleiro (ajusta a coluna para índice)
            tabuleiro[indexlinhaNavio4 + 1][indexColunaNavio4 - 1] = 3; // Posiciona a segunda parte do navio na diagonal
            tabuleiro[indexlinhaNavio4 + 2][indexColunaNavio4 - 2] = 3; // Posiciona a terceira parte do navio na diagonal

            printf("\n");
            printf("*** TABULEIRO BATALHA NAVAL ***\n\n");
            printf("    1 2 3 4 5 6 7 8 9 10\n");
            printf("   ---------------------\n");
            X = 'A'; // Reinicia a variável para exibir o tabuleiro
            for (i = 0; i < LINHAS && X <= 'J'; i++, X++)
            {
                printf("%c | ", X);
                for (j = 0; j < COLUNAS; j++)
                {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }
            printf("\n\n");
            printf("==========================================================================\n");
        }
        else
        {
            printf("                  ATENÇÃO: Posicionamento inválido!\n");
            printf("Por favor, verifique as instruções de posicionamento e tente novamente.\n");
            printf("==========================================================================\n");
            return 1;
        }
        printf("\n\n");
    }

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
