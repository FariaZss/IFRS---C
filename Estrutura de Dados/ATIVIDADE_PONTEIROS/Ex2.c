/*
a - Crie um programa que leia 4 variáveis int, informe o endereço e o conteúdo de cada uma delas

b- Crie uma função que recebe quatro ponteiros para inteiros como parâmetros e devolva a media 
aritmética dos conteúdos apontados (float); (fazer a média dos números, não dos endereços)

c - Crie uma função que receba como parâmetro 3 ponteiros variáveis inteiras e devolva o maior 
valor (maior conteúdo, não o maior endereço);

d - Crie uma função que receba como parâmetro 3 ponteiros para inteiro e devolva o endereço que 
aponta para a variável de maior valor; (importante: quero o endereço do maior valor, não o maior endereço...)
*/
#include <stdio.h>
int* endMaior(int *ptrW, int *ptrX, int *ptrY){
    int *maior = ptrW;

    if (*ptrX > *maior) maior = ptrX;
    if (*ptrY > *maior) maior = ptrY;

    return maior;
}

int maiorValor(int *ptrW, int *ptrX, int *ptrY){
    int maior, menor;
    
    maior = *ptrW;
    
    if(maior < *ptrX)
        maior = *ptrX; 
        
    if(maior < *ptrY)
        maior = *ptrY; 
    
    
    return maior;
}

float mediaArit(int *ptrW, int *ptrX, int *ptrY, int *ptrZ){
    
    int soma = (float)(*ptrW + *ptrX+ *ptrY + *ptrZ);
    float media = soma / 4; 
    
    return media;
}

int main(){

    int w, x, y, z;

    int *ptrW = &w;
    int *ptrX = &x;
    int *ptrY = &y;
    int *ptrZ = &z;

    printf("Informe o valor para W: "); scanf("%d", &w);
    printf("Informe o valor para X: "); scanf("%d", &x);
    printf("Informe o valor para Y: "); scanf("%d", &y);
    printf("Informe o valor para Z: "); scanf("%d", &z);

    printf("Media de W, X, Y, Z: %.1f\n", mediaArit(&w, &x, &y, &z));
    printf("O maior valor é %d\n", maiorValor(&w, &x, &y));
    printf("O endereço do maior valor é %u\n", endMaior(&w, &x, &y));

    printf("W: %d X: %d Y: %d Z: %d\n", w,x,y,z); //IMPRIME VALORES DE W, X, Y, Z
    printf("W: %u X: %u Y: %u Z: %u\n", &w, &x, &y, &z); //IMPRIME ENDEREÇO DE MEMÓRIA DAS VARIÁVEIS




}