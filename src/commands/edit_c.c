#include <stdio.h>
#include <stdlib.h>

#include "../../include/commands/edit_c.h"

#include "../../include/cli/messages.h"

#include "../../include/utils/file.h"
#include "../../include/utils/clear.h"
#include "../../include/utils/pause.h"
#include "../../include/utils/ask_for_string.h"

void edit_c() {
	clear();
	
	const char* path = ask_for_string(PROMPT_EDIT_PATH);

	if (!is_valid_svg(path)) {
		printf(ERROR_FILE_NOT_FOUND);
		pause();
		
		return;
	}
}