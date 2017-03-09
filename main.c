#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

int main()
{
    char x,i, curso[10] = {'a','d', 'r', 'i', 'a', 'n','o', 'p', 'd','s'};
    int cont = 0;
    for(i = 0 ; i < 10; i++)
    {
        printf("%c", curso[i]);
    }
    printf("\n\ndigite uma letra minuscula: \n");
    x = GetChar();
    for(i = 0 ; i < 10 ; i++)
    {
        if(curso[i] == x)
            cont ++;
    }
    printf("\nO numero de vezes que a letra %c se repete eh: %d \n",x, cont);
    printf("\nNOVO VETOR SEM A LETRA QUE SE REPETE: ");
    for(i = 0 ; i < 10 ; i++)
    {
        if(curso[i] != x)
            printf("%c",curso[i]);
    }
    printf("\n\n\n");
    return 0;

}
