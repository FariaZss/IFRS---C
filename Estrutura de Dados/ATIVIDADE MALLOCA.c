/******************************************************************************
Ex3. Criar agenda:
Cada registro deve ter capacidade para armazenar o nome, telefone, celular, endereço e aniversário.
A agenda deve ser apresentar as opções: 
1- inserir / 2-visualizar os dados de uma posição (perguntar a posição) / 3-sair; (ficar em laço até o usuário escolher sair). 
Máximo de 100 registros. (criar vetor de 100 posições, cada posição é um ponteiro para contato).
Cada contato é criado dinamicamente ocupando as posições no vetor sequencialmente.
Não esqueça de liberar a memória no final do programa, antes de sair.
*******************************************************************************/
#define MAX_VET 4

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[150];
    char telefone[15];
    char celular[15];
    char endereco [100];
    char anivers [11];
} Agenda;
   
void inserirContato(Agenda *a){
    

    printf("Informe o nome do contato: "); fgets((*a).nome, 150, stdin);
    printf("Informe o telefone: "); fgets((*a).telefone, 15, stdin);
    printf("Informe o celular: "); fgets((*a).celular, 15, stdin);
    printf("Informe o endereco: "); fgets((*a).endereco, 100, stdin);
    printf("Informe o anivers: "); fgets((*a).anivers, 11, stdin);

}

void visualizarAgenda(Agenda a){
    
    for(int i=0;i<MAX_VET;i++){
        if(a.[i] == POS){
            
        }
    }
    
}

int main(int argc, char *agrv[])
{
    Agenda* agenda[MAX_VET];
    
    int POS;
    
    int respMenu;
    
    do{
        printf("============\nMENU\n1 - INSERIR\n2 - VISUALIZAR OS DADOS (PERGUNTAR POSIÇÃO)\n3 - SAIR\n===============\n");
        printf("Selecione a opção desejada: ");
        scanf("%d", &respMenu);
        getchar();
        
        switch(respMenu){
            case 1: 
                inserirContato(agenda);
                break;
            case 2:
                printf("Qual posição deseja visualizar?\n"); scanf("%d", &POS);
                visualizarAgenda(agenda[POS]);
                break;
            case 3:
                break;
            default:
                printf("Opção inválida\n");
        }
    
    }while(respMenu != 3);


    return 0;
}