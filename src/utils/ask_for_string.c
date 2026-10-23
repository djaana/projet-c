#include <stdio.h>
#include <string.h>

#include "../../include/utils/flush_stdin.h"
#include "../../include/utils/ask_for_string.h"

/**
 * Prompts the user for a line of text.
 * The returned buffer is static: it is overwritten by the next call.
 *
 * @param prompt text displayed before reading
 * @return the line entered without its newline, or an empty string on end of input
 */
char* ask_for_string(char* prompt) {
	static char buffer[256];

	flush_stdin();
	printf("%s", prompt);
	
	if (!fgets(buffer, sizeof(buffer), stdin)) {
		buffer[0] = '\0';
		return buffer;
	}

	buffer[strcspn(buffer, "\n")] = '\0';
	return buffer;
}