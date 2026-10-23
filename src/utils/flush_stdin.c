#include <stdio.h>

#include "../../include/utils/flush_stdin.h"

/**
 * Discards the characters remaining on the current line of standard input.
 */
void flush_stdin() {
	int c;
	
	while((c = getchar()) != '\n' && c != EOF) {}
}