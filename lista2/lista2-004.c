#include <stdio.h>

int main(){
    int jose = 150;
    int pedro = 110;
    int anos = 0;
    for(anos; jose >= pedro; anos++){
        jose +=2;
        pedro += 3;
    };
    printf("Pedro ultrapassará josé em %d anos. \n", anos);
    return 0;
}