#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};


int main(){
    const int numPessoas = 1;
    struct Pessoa clienteA;


    for(int i = 0; i < numPessoas; i++){
        printf("Cadastre os dados dos Clientes:\n");

        printf("Nome:");
        scanf(" %[^\n]s", clienteA.nome );
        printf("Idade:");
        scanf("%d", clienteA.idade);
        printf("Altura:");
        scanf("%f", clienteA.altura);
    }

    printf("Nome: %s\n", clienteA.nome);
    printf("Idade: %d\n", clienteA.idade);
    printf("Altura: %f", clienteA.altura);
    
    return 0;
}
