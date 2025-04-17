#include <stdio.h>
#include <stdlib.h>
#include "../Prototipos/prototipo_cliente.h"


void registra_cliente(){
int opc_c;

    do{

printf("===========================================================\n");
printf("|                                                         |\n");
printf("|                 ESCOLHA UMA DAS OPÇÕES                  |\n");
printf("|                                                         |\n");
printf("|                1 - Registrar Cliente                    |\n");
printf("|                2 - Atualizar Cliente                    |\n");
printf("|                3 - Colsuntar Cliente                    |\n");
printf("|                4 - Remover Cliente                      |\n");
printf("|                5 - Imprimir Cliente                     |\n");
printf("|                6 - Imprimir Lista Cliente               |\n");
printf("|                0 - Voltar para o Menu                   |\n");
printf("|                                                         |\n");
printf("===========================================================\n");
scanf("%d", &opc_c);

system("clear");

switch (opc_c)
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
       
}while(opc_c != 0);

}