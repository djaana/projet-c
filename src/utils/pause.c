#include <stdio.h>

#include "../../include/utils/pause.h"

void pause() {
	printf("\nPress Enter to continue...");

	int c;
	while ((c = getchar()) != '\n' && c != EOF) { }
	
	if (c == EOF) getchar();
};