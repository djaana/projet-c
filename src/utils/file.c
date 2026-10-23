#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "../../include/utils/file.h"

/**
 * Checks that a path ends with ".svg" and has a non-empty name before it.
 *
 * @param path path to check
 * @return true if the extension is ".svg"
 */
bool has_svg_extension(const char* path) {
  const size_t length = strlen(path);

  return length > 4 && strcmp(path + length - 4, ".svg") == 0;
};

/**
 * Checks that a file can be opened for reading.
 *
 * @param path path of the file
 * @return true if the file exists and is readable
 */
bool file_exists(const char* path) {
  FILE* file = fopen(path, "r");
  if (file) {
    fclose(file);

    return true;
  }

  return false;
}

/**
 * Checks that a path has the ".svg" extension and points to an existing file.
 *
 * @param path path to check
 * @return true if the path is a valid SVG file
 */
bool is_valid_svg(const char* path) {
  return has_svg_extension(path) && file_exists(path);
}

/**
 * Deletes a file.
 *
 * @param path path of the file to delete
 * @return true if the file was deleted
 */
bool delete_file(const char* path) {
  if (remove(path) == 0) return true;
  return false;
}