#include "major1.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	int choice;
	unsigned int num;
	int numb, bit, numm;

	
	do{
		printf("Enter the menu option for the operation to perform:\n");
		printf("(1) Count Leading Zeros\n");
		printf("(2) Endian Swap\n");
		printf("(3) Rotate-Right\n");
		printf("(4) Parity\n");
		printf("(5) EXIT\n");
		printf("--> "); scanf("%d", &choice);
	
		while(choice < 1 || choice > 5){
			printf("Error: Invalid option. Please try again.\n");
			printf("Enter the menu option for the operation to perform:\n");
			printf("(1) Count Leading Zeros\n");
			printf("(2) Endian Swap\n");
			printf("(3) Rotate-Right\n");
			printf("(4) Parity\n");
			printf("(5) EXIT\n");
			printf("--> "); scanf("%d", &choice);
		}
		
		switch(choice){
			case 1:
				//unsigned int num;
				do{
					printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): "); scanf("%d", &num);
				}while(num < 1 || num > 4294967295);
				clz(num);
				break;
			case 2:
				do{
                                        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): "); scanf("%u", &num);
                                }while(num < 1 || num > 4294967295);
				printf("Endian swap of %u gives ", num);
				endian(num);
				break;

			case 3:
				//int numb, bit;
				printf("Enter a 32-bit number (>=1 and <=4294967295), inclusively):");
				scanf("%d", &numb);

				printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively):"); 
				scanf("%d", &bit);
				rotate(numb, bit);
				break;
				
			case 4:
				//int numm;
				do{
					printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): "); scanf("%d", &numm);
				}while(numm < 1 || numm > 4294967295);
				int result = parity(numm);
				printf("Parity of %d is %d\n", numm, result);

				break;
		}
	
	}while(choice != 5);
	printf("Program terminating. Goodbye...\n");
	return 0;
}
