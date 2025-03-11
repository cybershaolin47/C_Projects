#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	int *numbers;
	int size = 2;
	numbers = (int*)malloc(sizeof(int) * size);
	int input = 0; 
	int i = 0;

	do{
		if (i == size){
			size += 2;
			numbers = (int*)realloc(numbers, sizeof(int)*size);
			printf("Reallocating to %d ints\n", size);
		}
		printf("Enter (-1 to quit): ");
		scanf("%d", &input);

		if(input != -1){
			numbers[i] = input;
			i++;
	}

	} while(input != -1);

	int elements = i;
	int total = 0;
	for(int j = 0; j < elements; j++){
		total += numbers[j];

	}
	printf("Average: %d\n", total/elements);

	free(numbers);
	return 0;
}
