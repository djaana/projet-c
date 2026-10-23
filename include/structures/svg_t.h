#ifndef SVG_T_H
#define SVG_T_H

#include <stddef.h>
#include <stdbool.h>

#include "viewport_size_t.h"
#include "shape_t.h"

/**
 * An SVG document held in memory.
 */
typedef struct {
  /** Viewport dimensions. */
  viewport_size_t size;
  /** Dynamic array of shapes. */
  shape_t* shapes;
  /** Number of shapes in the array. */
  size_t count;
  /** Allocated capacity of the array. */
  size_t capacity;
  /** True if the document has unsaved changes. */
  bool modified;
} svg_t;

#endif