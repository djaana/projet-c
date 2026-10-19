#ifndef FILE_H
#define FILE_H

#include <stdbool.h>

bool has_svg_extension(const char* path);
bool file_exists(const char* path);
bool is_valid_svg(const char* path);
bool delete_file(const char* path);

#endif