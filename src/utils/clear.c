#ifdef _WIN32
#include <windows.h>
#endif

#include <stdio.h>

#include "../../include/utils/clear.h"

#include "../../include/utils/flush_stdin.h"

void clear() {
	#ifdef _WIN32
	const HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	const DWORD mode = 0;

	if (GetConsoleMode(h, &mode)) SetConsoleMode(h, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
	#endif

	printf("\033[2J\033[3J\033[H");
}