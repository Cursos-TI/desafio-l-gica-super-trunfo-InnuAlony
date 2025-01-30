#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int opcao;
menu1:
        printf("~~~## Bem vindo ao Super trunfo Paises ##~~~ \n");
        printf("1. Iniciar o game \n");
        printf("2. Sobre o game \n");
        printf("3. Sair do game \n");
        scanf("%d", &opcao);
        switch (opcao){
        case 1:
        printf("aqui o jogo acontece...... \n");
        break;
    
        case 2:
            printf("O jogo se baseia numa competicao entre cartas de cidades \n");
            printf("voce escolhe um pais e ganha uma carta aleatoria de uma cidade \n");
            printf("na sequencia voce escolhe um atributo e compara contra o computador \n");
            printf("o valor escolhido de maior valor ganha a partida \n");
            printf("Escolha uma opcao \n");
            printf("1. Voltar ao menu anterior \n");
            printf("2. Sair do game /n");
            scanf("%d", &opcao);
                             
                
            break;
            case 3: exit();
                break;
        default: 
        printf("opcao invalida \n");
}
    switch (opcao){
    case 1: goto menu1;
            break;
            case 2: exit();
            break;
               default:
               printf("opcao invalida \n");
                   }

    return 0;
}

            
        
        

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
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
