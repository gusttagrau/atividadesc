#include <stdio.h>
#include <string.h>
#include "cliente.h"
#include "validacao.h"

//funcao para cadastrar um cliente
void cadastrar_cliente(cliente *cliente)
{
    printf("digite o nome do cliente: ");
    fgets(cliente->nome, sizeof(cliente->nome), stdin);
    cliente->nome[strcspn(cliente->nome. "\n")] = 0; // remover a nova linha

    do
    {
        printf("digite o cpf do cliente: ");
        fgets(cliente->cpf, sizeof(cliente->cpf), stdin);
        cliente->cpf[strcspn(cliente->cpf. "\n")] = 0;
    } while (!validar_cpf(cliente->cpf));

     do
    {
        printf("digite o email do cliente: ");
        fgets(cliente->email, sizeof(cliente->email), stdin);
        cliente->email[strcspn(cliente->email. "\n")] = 0;
    } while (!validar_email(cliente->email));

    printf("digite a idade do cliente: ");
    scanf("%d", &cliente->idade);
    getchar(); // limpa o buffer do teclado
 
}