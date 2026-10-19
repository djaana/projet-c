#include <stdio.h>
#include <string.h>

#include "../../include/utils/ask_for_string.h"

#include "../../include/utils/flush_stdin.h"

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