#include <stdio.h>
#include <math.h>
#include "max.h"
#include "min.h" 
#include "var.h"

int main (){
     int n = 7;
     int maxx;
     int minn; 
     float  var; 
     int t [7] = {13, 12, 5,1,19,13,17};
    
     max(t, n, &maxx);
     min(t, n,&minn); 
     variance(t, n, &var);
     printf("le max est  :%d\n  le min est : %d\n  la variance est :%f\n", maxx, minn, var );
      
     
     return 0;
} 
