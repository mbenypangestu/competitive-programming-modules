#include <stdio.h>
#include <stdlib.h>
#include "max.h"
int max(int a[], int x) {
  int c, max, index;
 
  max = a[0];
  index = 0;
 
  for (c = 1; c < x; c++) {
    if (a[c] > max) {
       index = c;
       max = a[c];
    }
  }
 
  return index;
}
