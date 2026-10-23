#include <stdlib.h>

#include "../../include/svg/svg.h"

/**
 * Creates an empty SVG.
 *
 * @param size viewport dimensions
 * @return the new SVG, without shapes and not modified
 */
svg_t svg_create(const viewport_size_t size) {
  const svg_t svg = {
    .size = size,
    .shapes = NULL,
    .count = 0,
    .capacity = 0,
    .modified = false
  };

  return svg;
}

/**
 * Appends a shape to an SVG, doubling the capacity of the array when full.
 * Marks the SVG as modified on success.
 *
 * @param svg SVG to modify
 * @param shape shape to append
 * @return true on success, false if the allocation failed
 */
bool svg_add_shape(svg_t* svg, const shape_t shape) {
  if (svg->count == svg->capacity) {
    const size_t capacity = svg->capacity == 0 ? 8 : svg->capacity * 2;
    shape_t* shapes = realloc(svg->shapes, capacity * sizeof(shape_t));

    if (!shapes) return false;

    svg->shapes = shapes;
    svg->capacity = capacity;
  }

  svg->shapes[svg->count++] = shape;
  svg->modified = true;

  return true;
}

/**
 * Frees the memory held by an SVG.
 *
 * @param svg SVG to destroy
 */
void svg_destroy(svg_t* svg) {
  free(svg->shapes);

  svg->shapes = NULL;
  svg->count = 0;
  svg->capacity = 0;
}