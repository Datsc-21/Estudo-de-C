#include <stdio.h>
#include <stdlib.h>
#include "../Prototipos/prototipo_curriculo.h"

void criar_curriculo(){
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
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 0:
            
            break;
        
        default:
        printf("Opcao Invalido!!! \n");
            break;
        }


    }while(opc_curr != 0);



}
