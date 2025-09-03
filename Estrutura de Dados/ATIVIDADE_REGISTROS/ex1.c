/******************************************************************************
Exercício 1 Sua empresa o contratou para desenvolver uma agenda para uma pessoa 
solitária que tem apenas o telefone da mãe e um amigo.
Esta agenda deve ter capacidade para armazenar o nome, telefone fixo, celular, 
endereço e aniversário.
A agenda deve ser capaz de inserir os dados de todos os contatos (máx 3: A mãe,
o amigo e ele mesmo)
Após a inserção de todos os contatos deve perguntar ao usuário o número do 
contato que ele quer visualizar, caso o número esteja fora do intervalo (1 a 3),
o programa termina, caso contrário o programa escreve na tela os dados e pergunta novamente.
Este programa nao precisa ter funções além da principal
*******************************************************************************/
#define MAX_AGENDA 3
#include <stdio.h>

typedef struct {
    char nome[100];
    char fixo[11]; 
    char celular[11];
    char end[100];
    char anivers[8];
} Agenda;
    
int main()
{
    Agenda a[MAX_AGENDA];
    
    int respMenu;
    
        printf("======Menu=====\n\n");
        printf("Insira dados de contato\n");

        for(int i=0;i<3;i++){
            printf("Informe o nome do contato: ");  scanf("%s", (a -> nome));
            printf("Informe o telefone do contato: ");  scanf("%s", (a -> fixo));
            printf("Informe o celular do contato: ");  scanf("%s", (a -> celular));
            printf("Informe o endereco do contato: ");  scanf("%s", (a -> end));
            printf("Informe o aniversario do contato(DD/MM/AA): ");  scanf("%s", (a -> anivers));
            printf("\n");
        }
        
    do{
        
        printf("Qual contato deseja visualizar?\n1 | 2 | 3 |\n");   scanf("%d", &respMenu);
        
        switch(respMenu){
            case 1:
                printf("Nome:")
            case 2:
            
            case 3:
        }
        
        
    } while ((respMenu > 3)&&(respMenu < 1));
    
    */    
    
    return 0;
}