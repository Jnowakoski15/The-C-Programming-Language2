#include <stdio.h>

main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("celsius fahr\n");
	while (celsius <= upper) {
		fahr =(celsius*1.8) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}
