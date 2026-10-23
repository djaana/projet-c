#include <stdio.h>

#include "../../include/cli/messages.h"

#include "../../include/svg/svg_file.h"

#include "../../include/utils/file.h"
#include "../../include/utils/clear.h"
#include "../../include/utils/pause.h"
#include "../../include/utils/ask_for_string.h"

#include "../../include/commands/save_svg_c.h"

bool save_svg_c(svg_t* svg) {
	clear();

	const char* path = ask_for_string(PROMPT_SAVE_PATH);

	if (!has_svg_extension(path)) {
		printf(ERROR_INVALID_EXTENSION);
		pause();

		return false;
	}

	if (!svg_write(svg, path)) {
		printf(ERROR_FILE_WRITE);
		pause();

		return false;
	}

	svg->modified = false;

	printf(SUCCESS_FILE_SAVED);
	pause();

	return true;
}