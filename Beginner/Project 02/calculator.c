#include <stdio.h>

int main(){
	printf("[-] Welcome to the Calculator app! [-]");
	int numb1;
	int numb2;
    char action;
    int result;

	printf("\nGive me a number: ");
	scanf("%d", &numb1);

	printf("\nGive me another number: ");
	scanf("%d", &numb2);

	printf("\nChoose an action for these numbers(+ - * /): ");
    scanf(" %c", &action);

    switch(action){
        case '+':
            result = numb1 + numb2;
            printf("\nThe result is %d", result);
            break;
        case '-':
            result = numb1 - numb2;
            printf("\nThe result is %d", result);
            break;
        case '*':
            result = numb1 * numb2;
            printf("\nThe result is %d", result);
            break;
        case '/':
        if(numb2 == 0){
            printf("Cannot divide with zero!");
            break;
        }
        else{
            result = numb1 / numb2;
            printf("\nThe result is %d", result);
            break;
        }
        default:
            printf("\nInvalid operator, exiting calculator!");
    }
	return 0;
}
