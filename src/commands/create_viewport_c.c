#include <stdio.h>

#include "../../include/cli/messages.h"

#include "../../include/utils/clear.h"
#include "../../include/utils/ask_for_int.h"

#include "../../include/commands/create_viewport_c.h"

#include "../../include/structures/viewport_size_t.h"

/**
 * Asks for the width then the height of a viewport.
 * The height is not asked if the width is not strictly positive.
 *
 * @return the viewport dimensions, with a width of 0 if the width was invalid
 */
viewport_size_t create_viewport_c() {
	clear();
	
	char prompt[1024];

	snprintf(prompt, sizeof(prompt),
		"%s"
		"%s"
		"%s",
		PROMPT_CREATE_VIEWPORT_SIZE_PANEL,
		PROMPT_CREATE_VIEWPORT_SIZE,
		PROMPT_CREATE_VIEWPORT_WIDTH
	);

	const int viewport_width = ask_for_int(prompt);

	viewport_size_t error = {
		.width = 0,
		.height = 0
	};

	if (viewport_width <= 0) return error;
	
	clear();
	snprintf(prompt, sizeof(prompt),
		"%s"
		"   ─ %d x ?\n"
		"\n"
		"  ──────────────────────────────────────\n"
		"%s",
		PROMPT_CREATE_VIEWPORT_SIZE_PANEL,
		viewport_width,
		PROMPT_CREATE_VIEWPORT_HEIGHT
	);

	const int viewport_height = ask_for_int(prompt);

	const viewport_size_t result = {
		.width = viewport_width,
		.height = viewport_height
	};

	return result;
}