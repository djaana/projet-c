#include <stdio.h>

#include "../../include/commands/delete_c.h"

#include "../../include/cli/messages.h"

#include "../../include/utils/file.h"
#include "../../include/utils/clear.h"
#include "../../include/utils/pause.h"
#include "../../include/utils/ask_for_string.h"

void delete_c() {
	clear();
	
	const char* path = ask_for_string(PROMPT_DELETE_PATH);

	if (!is_valid_svg(path)) {
		printf(ERROR_FILE_NOT_FOUND);
		pause();
		
		return;
	}

	if (delete_file(path)) printf(SUCCESS_FILE_DELETED);
	else printf(ERROR_FILE_DELETE);

	pause();
}