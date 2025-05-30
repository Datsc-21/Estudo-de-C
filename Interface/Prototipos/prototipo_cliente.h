#pragma once

//declaração da constante
#define MAX_CLIENTES 10

typedef struct {
int id;
char nome[50];
int data_de_nascimento[11];
char telefone[15];
char email[30];
int cpf[12];

} CLIENTE;

void cliente();

void registrar_cliente();
void atualizar_cliente();
void colsuntar_cliente();
void remover_cliente();
void imprimir_cliente();
void imprimir_lista_cliente();