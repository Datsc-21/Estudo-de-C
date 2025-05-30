#pragma once

#define MAX_CURRICULOS 10

typedef struct{
    char nome[50];
    char sexo[1];
    char estado_civil[10];
    char naturalidade[50];
    int data_de_nascimento[15];


} CURRICULO;

void curriculo();

void criar_curriculo();
void atualizar_curriculo();
void colsuntar_curriculo();
void remover_curriculo();
void imprimir_curriculo();
void imprimir_lista_curriculo();