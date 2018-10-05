#include <stdio.h>
#include <stdlib.h>
#include "count.h"

int count (int x){
    int n = 0;
    scanf("%d", &x);
    while(x != 0)
    {
        
        // n = n/10
        x /= 10;
        ++n;
    }

    return n;
}