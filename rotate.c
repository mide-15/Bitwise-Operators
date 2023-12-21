#include "major1.h"
#include <stdio.h>
#include <stdlib.h>

void rotate(unsigned long int numb, int bits){

	unsigned long moved = (numb >> bits)|(numb << (32 - bits));

	printf("%lu rotated by %d position give: %lu\n", numb, bits, moved); 
}