#include <stdio.h>
#include <stdlib.h>

#include "../../include/cli/messages.h"

#include "../../include/utils/file.h"
#include "../../include/utils/clear.h"
#include "../../include/utils/pause.h"
#include "../../include/utils/ask_for_string.h"

#include "../../include/commands/visualize_c.h"

void visualize_c() {
	clear();
	
	const char* path = ask_for_string(PROMPT_VISUALIZE_PATH);

	if (!is_valid_svg(path)) {
		printf(ERROR_FILE_NOT_FOUND);
		pause();
		
		return;
	}

	char cmd[1024];

	#ifdef _WIN32
		snprintf(cmd, sizeof(cmd),
		"cmd /c start \"\" \"%s\"",
		path
	);
	#elif __APPLE__
		snprintf(cmd, sizeof(cmd),
		"open \"%s\"",
		path
	);
	#else
		snprintf(cmd, sizeof(cmd),
		"xdg-open \"%s\"",
		path
	);
	#endif

	system(cmd);
	printf(SUCCESS_FILE_VISUALIZE);
	pause();
}