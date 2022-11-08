#include <stdio.h>

int main()
{
    int v[10], *p;
    
    p = v;
    
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    v[5] = 6;
    v[6] = 7;
    v[7] = 8;
    v[8] = 23;
    v[9] = 9;

    for(int i = 0; i < 10; i++){
      printf("%d ", *p);
      p++;
    }
    
    return 0;
}
