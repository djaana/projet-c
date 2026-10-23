#ifndef SHAPE_T_H
#define SHAPE_T_H

/**
 * Kinds of shapes supported by the editor.
 */
typedef enum {
  /** A circle. */
  SHAPE_CIRCLE
} shape_type_t;

/**
 * A circle defined by its center and its radius.
 */
typedef struct {
  /** X coordinate of the center. */
  int cx;
  /** Y coordinate of the center. */
  int cy;
  /** Radius, strictly positive. */
  int r;
} circle_t;

/**
 * A generic shape, tagged by its type.
 */
typedef struct {
  /** Type of the shape, selects the active member of data. */
  shape_type_t type;
  /** Data specific to the shape type. */
  union {
    /** Active when type is SHAPE_CIRCLE. */
    circle_t circle;
  } data;
} shape_t;

#endif