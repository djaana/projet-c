#include <stdio.h>
#include <stdbool.h>

#include "../../include/cli/add_shape_m.h"

#include "../../include/cli/messages.h"

#include "../../include/utils/clear.h"
#include "../../include/utils/ask_for_int.h"

#include "../../include/structures/viewport_size_t.h"

void create_m(const viewport_size_t size) {
  bool running = true;

  while (running) {
    clear();

    char prompt[1024];

    snprintf(prompt, sizeof(prompt),
      "%s"
      "   ─ %d x %d\n"
      "%s",
      CLI_CREATE_PANEL,
      size.width,
      size.height,
      CLI_CREATE_MENU
    );

    const int menu = ask_for_int(prompt);

    switch (menu) {
      // Add shape
      case 1: {
        add_shape_m();

        break;
      }
      // Edit shape
      case 2: break;
      // Delete shape
      case 3: break;
      // Reset SVG
      case 4: break;
      // Back
      case 0: {
        running = false;
        
        break;
      }
    }
  }
}