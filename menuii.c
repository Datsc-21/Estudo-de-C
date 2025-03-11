#include <stdio.h>
#include <stdlib.h>

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
    printf("\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 0:
        break;
    
    default:
    printf("OPCAO INVALIDA!!!!");
        break;
    }

}while(op != 0);
}