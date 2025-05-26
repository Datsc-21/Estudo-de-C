#include <stdio.h>
#include <stdlib.h>
#include "../Prototipos/prototipo_curriculo.h"

void curriculo(){
int opc_curr;

    do{

        printf("|=========================================================|\n");
        printf("|                                                         |\n");
        printf("|                  ESCOLHA UMA OPÇÕES                     |\n");
        printf("|                                                         |\n");
        printf("|                 1 - Criar Curriculo                     |\n");
        printf("|                 2 - Atualizar Curriculo                 |\n");
        printf("|                 3 - Colsuntar Curriculo                 |\n");
        printf("|                 4 - Remover Curriculo                   |\n");
        printf("|                 5 - Imprimir Curriculo                  |\n");
        printf("|                 6 - Imprimir Lista de Curriculo         |\n");
        printf("|                 0 - Voltar para o Menu                  |\n");
        printf("|                                                         |\n");
        printf("|=========================================================|\n");
        scanf("%d", &opc_curr);

        system("clear");

        switch (opc_curr)
        {
        case 1: criar_curriculo();
            
            break; 
        case 2: atualizar_curriculo();
            
            break;
        case 3: colsuntar_curriculo();
            
            break;
        case 4: remover_curriculo();
            
            break;
        case 5: imprimir_curriculo();
            
            break;
        case 6: imprimir_lista_curriculo();
            
            break;
        case 0:
            
            break;
        
        default:
        printf("Opcao Invalido!!! \n");
            break;
        }


    }while(opc_curr != 0);



}
