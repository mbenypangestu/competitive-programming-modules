#include <stdio.h>
#include <string.h> 
#include <stdbool.h>
#include "isexist.h"

bool isexist(int *arr, int size, int val){
    int i;
    for (i=0; i < size; i++) {
        if (arr[i] == val)
            return true;
    }
    return false;
}