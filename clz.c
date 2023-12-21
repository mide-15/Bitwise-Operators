#include "major1.h"
#include <stdio.h>
#include <stdlib.h>

void clz(unsigned int x){
	int bits = sizeof(x)*8;
	
	int count = 0;
	int track = 1<<(bits-1);
	
	for(int i = 0; i < bits; i++){
      if((x << i) & track) {
         break;
      }
      count++;
   }
	printf("The number of leading zeroes in %d is %d\n", x, count);
}
