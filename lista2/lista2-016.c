#include <stdio.h>

int main(){
    int div3 = 0, div5 = 0;
    for(int i = 0; i < 200; i++){
        if(i <= 100){
            if(i % 3 == 0){
                div3 += 1;
            };
        };
        if(200 <= i <= 100){
            if(i % 5 == 0){
                div5 += 1;
            };
        };
    };
    printf("Múltiplos de 3 no intervalo 0-100: %d \n", div3);
    printf("Múltiplos de 5 no intervalo 100-200: %d \n", div5);
    return 0;
}