#include <stdlib.h>
#include <stdio.h>


float fahrenheit(float);
float kelvin(float);


int main() {

	float c, f, k;
	printf("Type the temperature in celcius: ");
	scanf_s("%f", &c);

	f = fahrenheit(c);
	k = kelvin(c);

	printf("Fahrenheit: %.2f \nKelvin: %.2f\n\n", f, k);

	system("PAUSE");
	return 0;
}

float fahrenheit(float cel) {
	float f;
	f = (cel * 1.8) + 32;
	return f;
}

float kelvin(float cel) {
	float k;
	k = cel + 273.15;
	return k;
}
