#include <stdio.h>
#include <stdbool.h>

#include "../../include/cli/add_shape_m.h"
#include "../../include/cli/unsaved_m.h"
#include "../../include/cli/messages.h"

#include "../../include/svg/svg.h"

#include "../../include/utils/clear.h"
#include "../../include/utils/ask_for_int.h"

#include "../../include/commands/save_svg_c.h"

#include "../../include/structures/viewport_size_t.h"

/**
 * Displays the SVG creation menu for a new SVG and handles its actions
 * until the user saves or leaves.
 *
 * @param size viewport dimensions of the new SVG
 */
void create_m(const viewport_size_t size) {
  bool running = true;

  svg_t svg = svg_create(size);

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
        add_shape_m(&svg);

        break;
      }
      // Edit shape
      case 2: break;
      // Delete shape
      case 3: break;
      // Reset SVG
      case 4: break;
      // Save SVG
      case 5: {
        if (save_svg_c(&svg)) running = false;

        break;
      }
      // Back
      case 0: {
        if (unsaved_m(&svg)) running = false;
        
        break;
      }
    }
  }

  svg_destroy(&svg);
}