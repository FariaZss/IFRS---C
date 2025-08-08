#include <stdio.h>

/******************************************************************************
Situação Problema: (RESOLVER EM PORTUGUÊS)

Você precisa armazenar uma lista de códigos numéricos, a capacidade desta lista 
é de no máximo 20 posições.

Os códigos numéricos são todos inteiros (positivos e negativos). Os códigos 
devem ser inseridos conforme informado pelo usuário.

Seu programa deverá permitir (DESCREVER EM PORTUGUÊS): 

*****a - Consultar a posição (0 a 19); Imprimir o código numérico na tela.

b - Inserção de um novo elemento na posição indicada pelo usuário; Se o usuário 
indicar uma posição ocupada, os elementos subsequentes devem "andar uma posição"
para o final; Se o usuário indicar uma posição maior que o número de posições 
ocupadas, o item será inserido na primeira posição livre (se não estiver cheia).

c - Retirar um elemento indicado pelo usuário (usuário informa a posição); 
Se houver elementos posteriores, estes devem tomar a posição que ficou livre;

d - Consultar a quantidade de posições ocupadas na lista;

Dicas: 
i. Usar um vetor de inteiros de 20 posições; 
ii. armazenar em um número inteiro a quantidade de elementos ocupados; 
se ocupados é igual a zero, significa que o vetor está vazio, se ocupados é igual 
a 20 significa que a lista está cheia;

1 - descrever em Português o processo que deve acontecer e  m cada um dos itens (a,b,c,d);
2 - descrever quais problemas podem ocorrer nos itens (a,b,c,d); (caso haja);
3 - descrever (pelo menos) um caso de teste para cada item (a,b,c,d) que permitam saber se estes estão funcionando adequadamente;
*******************************************************************************/
#define MAX_POS 4
#include <stdio.h>

int lista[MAX_POS];

/*FUNCAO QUE PRINTA O MENU INICIAL*/
void printMenu(){
    
    printf("\tMenu\n\n1 - Inserir valor na lista\n2 - Consultar posição na lista\n3 - Remover valor da lista\n4 - Consultar quantidade de itens na lista\n5 - Sair\n");

}

/*FUNCAO ADICIONANDO O VALOR NA LISTA, INDICANDO A POSICAO DESEJADA*/
int addValor(int lista[MAX_POS], int posList){
    
    int i, opcMenu;
    int valorX;

    for(i=0;i<lista;i++){                                                             //LAÇO QUE LÊ O ARRAY E CASO TENHA UMA POSIÇÃO VAZIA, PERMITE PREENCHER COM UM VALOR
        if(lista[i] == NULL){                                                             
            printf("Informe um valor para armazenar na lista: "); scanf("%d", &valorX);
            lista[i] = valorX; 
            
            printf("Informe a posição desejada: "); scanf("%d", &posList);
            for(i=0;i<lista;i++){
                lista[posList] = valorX;
            }
        }
    }

    if(lista[i]>=MAX_POS); sleep(1); main();
    
    return 0;
}

int consultaPos(int lista[MAX_POS], int posList){
   
    int i;
        
    printf("Informe a posição que deseja pesquisar: "); scanf("%d", &posList);

    if((posList > -1) && (posList < lista)){
        printf("Posição %d: %d\n", posList, lista[posList]);
    } else {
        printf("Posicao inválida, tente novamente\n");
    }

    sleep(1);
    main();
    return 0;
}


int main()
{
    int opcMenu, i, posList;
    
    printMenu();
    
    printf("Selecione uma opcao: "); scanf("%d", &opcMenu);
    
        switch(opcMenu){
            case 1: 
                addValor(lista, posList);
                break;
            case 2:
                consultaPos(lista, posList);
                break;
            case 3:
                //deleteList();
                break;
            case 4:
                //searchQt();
                break;
            case 5:
                printf("Programa finalizado\n");
                break;
            default:
                printf("Opção inválida! Tente novamente\n");
        }
            
    return 0;
}