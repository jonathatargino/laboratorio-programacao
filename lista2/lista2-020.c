#include <stdio.h>

int main(){
    int fatorial;
    for(int i = 1; i <= 10; i++){
        if(i % 2){
            fatorial = 1;
            for(int x = i; x >= 1; x--){
                fatorial *= x;
            };
            printf("Fatorial de %d = %d\n", i, fatorial);
        };
    };

    
    return 0;
}