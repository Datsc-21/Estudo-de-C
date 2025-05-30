#pragma once

#define MAX_VENDAS 10

typedef struct {
    int id;
    int data_do_dia;

} VENDA;

void venda();

void criar_venda();
void atualizar_venda();
void colsuntar_venda();
void remover_venda();
void imprimir_venda();
void imprimir_lista_venda();