#include <stdio.h>
#include <stdlib.h>
#include "../Prototipos/prototipo_cliente.h"

void menu_II(){ 
int op;
do{

    printf("==============================================\n");
    printf("|                                            |\n");
    printf("|           ESCOLHA UMA DAS OPCAO            |\n");
    printf("|                                            |\n");
    printf("|             1 - CLIENTES                   |\n");
    printf("|             2 - CURRICULOS                 |\n");
    printf("|             3 - VENDAS                     |\n");
    printf("|             0 - SAIR                       |\n");
    printf("|                                            |\n");
    printf("==============================================\n");
    scanf("%d", &op);

    system("clear");

    switch (op)
    {
    case 1:
    registra_cliente();
        break;
    case 2:
        break;
    case 3:
        break;
    case 0:
        break;
    
    default:
    printf("OPCAO INVALIDA!!!! \n");
        break;
    }

}while(op != 0);
}