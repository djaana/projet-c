#include <stdio.h>

#include "../../include/svg/svg.h"

#include "../../include/cli/messages.h"

#include "../../include/utils/clear.h"
#include "../../include/utils/pause.h"
#include "../../include/utils/ask_for_int.h"
#include "../../include/utils/flush_stdin.h"

#include "../../include/commands/add_circle_c.h"

#include "../../include/structures/shape_t.h"

/**
 * Asks for the center and the radius of a circle and adds it to an SVG.
 * Nothing is added if the radius is not strictly positive.
 *
 * @param svg SVG to which the circle is added
 */
void add_circle_c(svg_t* svg) {
	clear();
	const int cx = ask_for_int(PROMPT_CIRCLE_CX);

	clear();
	const int cy = ask_for_int(PROMPT_CIRCLE_CY);

	clear();
	const int r = ask_for_int(PROMPT_CIRCLE_R);

	flush_stdin();

	if (r <= 0) {
		printf(ERROR_INVALID_RADIUS);
		pause();

		return;
	}

	const shape_t shape = {
		.type = SHAPE_CIRCLE,
		.data.circle = {
			.cx = cx,
			.cy = cy,
			.r = r}
	};

	if (svg_add_shape(svg, shape)) printf(SUCCESS_SHAPE_ADDED);
	else printf(ERROR_SHAPE_ADD);

	pause();
}