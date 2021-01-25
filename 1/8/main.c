#include <stdio.h>

// Create a program that counts blanks, tabs and newlines

main()
{
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			++nl;
		}
		//printf("%d\n", nl);
	}
	printf("%d\n", nl);
}
