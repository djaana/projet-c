#include <stdio.h>

#include "../../include/utils/flush_stdin.h"

void flush_stdin() {
	int c;
	
	while((c = getchar()) != '\n' && c != EOF) {}
}