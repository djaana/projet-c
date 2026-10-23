#include <stdbool.h>

#include "../../include/cli/unsaved_m.h"
#include "../../include/cli/messages.h"

#include "../../include/utils/clear.h"
#include "../../include/utils/ask_for_int.h"

#include "../../include/commands/save_svg_c.h"

/**
 * Asks what to do with unsaved changes before leaving.
 * Returns immediately if the SVG has no unsaved changes.
 *
 * @param svg SVG being left
 * @return true if the user may leave (saved or discarded), false to stay
 */
bool unsaved_m(svg_t* svg) {
  if (!svg->modified) return true;

  while (true) {
    clear();

    const int menu = ask_for_int(CLI_UNSAVED_MENU);

    switch (menu) {
      // Save and leave
      case 1: {
        if (save_svg_c(svg)) return true;

        break;
      }
      // Discard and leave
      case 2: return true;
      // Back
      case 0: return false;
    }
  }
}