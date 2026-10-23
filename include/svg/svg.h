#ifndef SVG_H
#define SVG_H

#include <stdbool.h>

#include "../structures/svg_t.h"
#include "../structures/shape_t.h"
#include "../structures/viewport_size_t.h"

svg_t svg_create(const viewport_size_t size);
bool svg_add_shape(svg_t* svg, const shape_t shape);
void svg_destroy(svg_t* svg);

#endif