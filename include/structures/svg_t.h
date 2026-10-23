#ifndef SVG_T_H
#define SVG_T_H

#include <stddef.h>
#include <stdbool.h>

#include "viewport_size_t.h"
#include "shape_t.h"

typedef struct {
  viewport_size_t size;
  shape_t* shapes;
  size_t count;
  size_t capacity;
  bool modified;
} svg_t;

#endif