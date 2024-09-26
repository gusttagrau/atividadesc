#include <stdio.h>
#include "../lib/cliente.h"
#include "../lib/cliente_cad.h"

int main()
{
    cliente cliente;
    cadastrar_cliente(&cliente);

    //gravar os dados no arquivo
    file *arquivo = fopen("cliente.txt", "a");
    if (arquivo == NULL)
    {
        printf(" erro ao abrir o arquivo. \n");
        return 1;
    }

    fprintf(arquivo, "%s;%s,%s,%d\n", cliente.nome, cliente.cpf, cliente.email,cliente.idade);
    fclose(arquivo);

    printf("cliente cadastrdo com sucesso!\n");

    return 0;
}