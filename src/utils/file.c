#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "../../include/utils/file.h"

bool has_svg_extension(const char* path) {
  const size_t length = strlen(path);

  return length > 4 && strcmp(path + length - 4, ".svg") == 0;
};

bool file_exists(const char* path) {
  FILE* file = fopen(path, "r");
  if (file) {
    fclose(file);

    return true;
  }

  return false;
}

bool is_valid_svg(const char* path) {
  return has_svg_extension(path) && file_exists(path);
}

bool delete_file(const char* path) {
  if (remove(path) == 0) return true;
  return false;
}