// C function to create a random row-column of decimal numbers between 0 and 10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	
	for (int i=0; i<12; i++) { // i = columns

		for (int j=0; j<2; j++) { // j = rows
			
			float r = ((float)rand()/(float)RAND_MAX)*10; // "*10" to limit the maximum random number [0-10]

			printf("%.2f ", r);
		}

		printf("\n");
	}
}

// There's an error I don't know how to fix, in the result the first number is the Unix time
