#include <stdio.h>
#include <stdbool.h>

#include "../../include/utils/ask_for_int.h"

#include "../../include/utils/clear.h"
#include "../../include/utils/flush_stdin.h"

int ask_for_int(char* prompt) {
	int input = 0;
	int result = 0;

	bool first = true;

	while (result != 1) {
		if (!first) clear();
		first = false;

		printf("%s", prompt);
		result = scanf("%d", &input);

		if (result == EOF) return 0;
		if (result != 1) flush_stdin();
	}

	return input;
}