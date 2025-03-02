#include <stdio.h>

void SumOfNumb(int result, int size, int input){
    for(int i = 0; i < size; i++){
        printf("Give me a number to add to the result: ");
        scanf("%d", &input);
        result+=input;
    }
    printf("\nThe result is %d", result);
}

int main(){
    
    int result = 0;
    int size;
    int input;

    printf("Give me a number from 1 to 10: ");
    scanf("%d", &size);

    if(size <= 10 && size > 0){
        SumOfNumb(result, size, input);
    }
    else {
        printf("\nThe number given is not in the range of 1 to 10!");
    }
	return 0;
}
