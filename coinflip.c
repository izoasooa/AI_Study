#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {

	int roll = 100;
	int frequency0 = 0;
	int frequency1 = 0;

	srand(time(NULL));
	
	for (int i = 0; i < roll; i++) {
		
		int face = rand() % 2;

		if (face == 0)
			frequency0 += 1;
		else
			frequency1 += 1;
	
	}
	printf("¾Õ¸é %d\n", frequency0);
	printf("µÞ¸é %d\n", frequency1);

	return 0;
}