#include <stdio.h>

void KiloToPounds (float input, float result){
	printf("Give an amount(kg) to convert to pounds: ");
	scanf("%f", &input);
	result = input * 2.204623;
	printf("%lf lbs", result);

}

void CelToFah (float input, float result){
	printf("\nGive me a degree(celsius)  to convert to fahrenheit: ");
	scanf("%f", &input);
	result = (1.8 * input) + 32;
	printf("%lf F", result);
}

void CmToInch (float input, float result){
	printf("\nGive me a cm number to convert to inch: ");
	scanf("%f", &input);
	result = input * 0.3937008;
	printf("%lf inch", result);
}

int main(){

	float input;
	float result;
	
	KiloToPounds(input, result);
	CelToFah(input, result);
	CmToInch(input,result);

	return 0;
}
