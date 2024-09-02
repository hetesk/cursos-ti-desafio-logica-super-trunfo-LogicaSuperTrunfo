#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char Acodcidade[5] = "";  // Alterado para char[5]
    char Anome[20] = "";
    int Apopulacao = 0; // apesar deste curso não ensinar DEVES-SE INICIALIZAR A VARIAVEL COM UM VALOR PARA NÃO CONTER LIXO!
    int Aarea  = 0;
    float Apib = 0.0;  // Alterado para float
    int Anpontoturistico=0;

    char Bcodcidade[5] = "";  // Alterado para char[5]
    char Bnome[20] = "";
    int Bpopulacao = 0; // apesar deste curso não ensinar DEVES-SE INICIALIZAR A VARIAVEL COM UM VALOR PARA NÃO CONTER LIXO!
    int Barea  = 0;
    float Bpib = 0.0;  // Alterado para float
    int Bnpontoturistico=0;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    printf("\n ******** INSIRA OS DADOS DA CARTA A");
    printf("\nCodigo da cidade > ");
    scanf("%s", Acodcidade); // Alterado para %s para aceitar string

    printf("\nNome > ");
    scanf("%s", Anome);  

    printf("\nPopulação > ");
    scanf("%d", &Apopulacao);

    printf("\nArea > ");
    scanf("%d", &Aarea);

    printf("\nPIB > ");
    scanf("%f", &Apib);  // Alterado para %f para aceitar float

    printf("\nNumero de pontos turísticos > ");
    scanf("%d", &Anpontoturistico);


    printf("\n\n\n\n\n\n ******** INSIRA OS DADOS DA CARTA B \n");
    printf("\nCodigo da cidade > ");
    scanf("%s", Bcodcidade); // Alterado para %s para aceitar string

    printf("\nNome > ");
    scanf("%s", Bnome);  

    printf("\nPopulação > ");
    scanf("%d", &Bpopulacao);

    printf("\nArea > ");
    scanf("%d", &Barea);

    printf("\nPIB > ");
    scanf("%f", &Bpib);  // Alterado para %f para aceitar float

    printf("\nNumero de pontos turísticos > ");
    scanf("%d", &Bnpontoturistico);

    printf("\n\n\n\n\n\n *******RESULTADO******* \n\n\n\n\n\n" );

    if (Apib > Bpib) 
    {
        printf("Carta A da cidade %s e a vencedora pois seu PIB e maior com o valor: %.2f", Anome, Apib);  // Alterado para %.2f para imprimir float
    }
    else 
    {
        if (Apib < Bpib)  
        {
            printf("Carta B da cidade %s e a vencedora pois seu PIB e maior com o valor: %.2f", Bnome, Bpib);  // Alterado para %.2f para imprimir float
        }
        else
        {
            printf("AS CARTAS A E B EMPATARAM, elas possuem o mesmo PIB no valor de: %.2f", Bpib);  // Alterado para %.2f para imprimir float
        }
    } ;
        
    printf("\n\n\n\n\n\n ******* FIM DO DO SUPER TRUNFO ******* \n\n\n\n\n\n" );
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
