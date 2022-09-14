#include <stdio.h>
#include <math.h>

int main(){
    for(int i = 0; i <= 7; i++){
        printf("3^%d = %.0lf \n", i, pow((double)3,(double) i));
    };
    return 0;
}