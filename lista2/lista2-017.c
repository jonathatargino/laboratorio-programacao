#include <stdio.h>

int main(){
    for(int c = 10; c <= 100; c += 10){
        printf("%d°C = %.1f°F\n",c, ((c * 9.0/5.0) + 32));
    }
    return 0;
}