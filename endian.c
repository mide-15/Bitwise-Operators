#include "major1.h"
#include <stdio.h>
#include <stdlib.h>

void endian(unsigned int num) {
	unsigned int swapped = ((num>>24)&0xff) |	//move B3 to B0
				((num<<8)&0xff0000) |	//move B1 to B2
				((num>>8)&0xff00) | 	//move B2 to B1
				((num<<24)&0xff000000);	//move B0 to B3
	printf("%u\n", swapped);
}
