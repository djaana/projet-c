#ifndef SVG_FILE_H
#define SVG_FILE_H

#include <stdbool.h>

#include "../structures/svg_t.h"

bool svg_write(const svg_t* svg, const char* path);

#endif