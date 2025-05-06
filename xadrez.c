#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void MovementHorse(int MovimentoCavalo){

    for(int i = 0; i < MovimentoCavalo; i++){
        for(int j = 0; j < 3; j++){
            if(j < 2){
                printf("Cima");
            } else {
                printf("Direita");
            }
            printf("\n");
        }
    }

}

void MovementQueen(int p){
    if(p > 0){
        MovementQueen(p - 1);
        printf("Esquerda %d\n", p);
    }
}

void MovementTower(int p){
    if(p > 0){
        MovementTower(p - 1);
        printf("Cima %d\n", p);
    }
}

void MovementBishop(int p){
    if(p > 0){
        MovementBishop(p - 1);
        printf("Cima/Direita %d\n", p);
    }
}

int main(){

    
    printf("Movimento Torre\n");
    MovementTower(5); //Chamando Função setando valor 5 casas
    
    printf("Movimento Rainha\n");
    MovementQueen(8);//Chamando Função setando valor 8 casas

    printf("Movimento Bispo\n");
    MovementBishop(8);//Chamando Função setando valor 8 casas

    printf("Movimento Cavalo\n");
    MovementHorse(2);//Chamando Função setando valor 2 casas
    
    return 0;
}