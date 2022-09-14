#include <stdio.h>

int main(){
    int a = 1, b = 1, c;
    printf("O 1 termo é: 1 \n");
    printf("O 2 termo é: 1 \n");
    for(int i = 3; i <= 20; i++){
        c = a + b;
        a = b;
        b = c;
        printf("O %d termo é: %d \n", i, c);
    };
    
    return 0;
}