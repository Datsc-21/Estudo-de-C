#include <stdio.h>
#include <stdlib.h>
#include "../Prototipos/prototipo_menuII.h"

int main(){
int opcao;

do{  

printf("=================================================\n");
printf("|                                               |\n");
printf("|              BEM VINDO A CRIACAO              |\n");
printf("|                      DE                       |\n");
printf("|                  CURRICULOS                   |\n");
printf("|                                               |\n");
printf("|            1 - ENTRAR NO SISTEMA              |\n");
printf("|            0 - SAIR DO SISTEMA                |\n");
printf("|                                               |\n");
printf("|                                               |\n");
printf("=================================================\n");
scanf("%d", &opcao);

system("clear");

switch(opcao)
{
case 1:
menu_II();
    break;
case 0:
    break;
default:
printf("Opcao Invalido!!! \n");
    break;
}
 }while (opcao != 0);
 

return 0;

}