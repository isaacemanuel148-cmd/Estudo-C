#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};


int main(){
    const int numPessoas = 3;
    struct Pessoa clienteA[3];

    printf("\n\nCadastre os dados dos Clientes:\n\n");
    for(int i = 0; i < numPessoas; i++){
        printf("\n\nCliente %d:\n", i+1);
        printf("Nome:");
        scanf(" %49[^\n]", clienteA[i].nome);
        printf("Idade:");
        scanf("%d", &clienteA[i].idade);
        printf("Altura:");
        scanf("%f", &clienteA[i].altura);
    }

    printf("\n\nDados dos clientes cadastrado:\n\n");
    for(int i = 0; i < 3; i++){
        printf("\n\nCliente %d\n", i+1);
        printf("Nome: %s\n", clienteA[i].nome);
        printf("Idade: %d\n", clienteA[i].idade);
        printf("Altura: %0.2f", clienteA[i].altura);
    }
    
    return 0;
}
