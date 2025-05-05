#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    //for
    //do while
    //while 

    srand(time(0));
    int RandomDistanceBispo = rand() % 5 + 1;
    int RandomDistanceTorre = rand() % 5 + 1;
    int RandomDistanceRainha = rand() % 8 + 1;

    //Loop Utilizando For
    for(int i = 1; i <= RandomDistanceTorre; i++){
        printf("Movimento Peça Torre Cima (%d)\n ", i);
    }
    printf("\n-----------------------\n");
    //Declarando variavel de indice 
    int i = 1;

    while (i <= RandomDistanceBispo)
    {
        printf("Movimento Peça Bispo Horizontal (%d)\n ", i);

        i++;
    }
    printf("\n-----------------------\n");
    //Setando variavel indice = 0
    i = 1;

    do{
        printf("Movimento Peça Rainha Esquerda (%d)\n ", i);
        i++;
    }while( i <= RandomDistanceRainha);
    printf("\n-----------------------\n");
}