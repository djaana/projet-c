#ifndef SHAPE_T_H
#define SHAPE_T_H

typedef enum {
  SHAPE_CIRCLE
} shape_type_t;

typedef struct {
  int cx;
  int cy;
  int r;
} circle_t;

typedef struct {
  shape_type_t type;
  union {
    circle_t circle;
  } data;
} shape_t;

#endif