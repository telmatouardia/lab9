#include <stdio.h>
#include <math.h>

void max(int t[], int n, int *max){
int i;

*max= t[0];

for (i=1; i < n; i++) { 
    if ( t[i]> *max) {
            *max= t[i];
     }

   }

}


