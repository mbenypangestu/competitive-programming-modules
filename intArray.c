#include <stdio.h>
#include <string.h> 
#include "intArray.h"

int* intArray(int *arr, int n){
        int val;
        static int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &val);
        arr[i] = val;

    }

    return arr;

}