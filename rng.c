#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

int main(){
	//seeding rand() at current time
	srand(time(NULL));


	int count = 0;
	while(count < MAX){
		//generating a random number between 1-10
		int randomNumber = (rand() % 10) + 1;
		printf("Number: %d\n", randomNumber);
		count++;
	}

	return 0;
}
