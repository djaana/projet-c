#include <stdio.h>

#include "../../include/svg/svg_file.h"

void write_circle(FILE* file, const circle_t* circle) {
  fprintf(file,
    "  <circle cx=\"%d\" cy=\"%d\" r=\"%d\" />\n",
    circle->cx,
    circle->cy,
    circle->r
  );
}

void write_shape(FILE* file, const shape_t* shape) {
  switch (shape->type) {
    case SHAPE_CIRCLE: {
      write_circle(file, &shape->data.circle);

      break;
    }
  }
}

bool svg_write(const svg_t* svg, const char* path) {
  FILE* file = fopen(path, "w");

  if (!file) return false;

  fprintf(file,
    "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"%d\" height=\"%d\" viewBox=\"0 0 %d %d\">\n",
    svg->size.width,
    svg->size.height,
    svg->size.width,
    svg->size.height
  );

  for (size_t i = 0; i < svg->count; i++) write_shape(file, &svg->shapes[i]);

  fprintf(file, "</svg>\n");

  return fclose(file) == 0;
}

bool svg_reset(const char* path) {
  FILE* file = fopen(path, "w");

  if (!file) return false;

  fputs(
    "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"100\" height=\"100\"></svg>\n",
    file
  );

  return fclose(file) == 0;
}