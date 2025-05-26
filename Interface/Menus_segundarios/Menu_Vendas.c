#include <stdio.h>
#include <stdlib.h>
#include "../Prototipos/prototipo_venda.h"

void venda() {
int op_ven;

do{

        printf("|=========================================================|\n");
        printf("|                                                         |\n");
        printf("|                   ESCOLHA UMA OPÇÕES                    |\n");
        printf("|                                                         |\n");
        printf("|                 1 - Criar Venda                         |\n");
        printf("|                 2 - Atualizar Venda                     |\n");
        printf("|                 3 - Colsuntar Venda                     |\n");
        printf("|                 4 - Remover Venda                       |\n");
        printf("|                 5 - Imprimir Venda                      |\n");
        printf("|                 6 - Imprimir Lista de Venda             |\n");
        printf("|                 0 - Voltar para o Menu                  |\n");
        printf("|                                                         |\n");
        printf("|=========================================================|\n");
        scanf("%d", &op_ven);
        
        system("clear");

        switch (op_ven)
        {
        case 1: criar_venda();
            
            break;
        case 2: atualizar_venda();
            
            break;
        case 3: colsuntar_venda();
            
            break;
        case 4: remover_venda();
            
            break;
        case 5: imprimir_venda();
            
            break;
        case 6: imprimir_lista_venda();
            
            break;
        case 0:
            
            break;
        
        default:
        printf("Opcao Invalido!!! \n");
            break;
        }
    



}while (op_ven != 0);



}