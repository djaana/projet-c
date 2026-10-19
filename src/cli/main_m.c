#include <stdbool.h>

#include "../../include/cli/main_m.h"

#include "../../include/cli/create_m.h"

#include "../../include/cli/messages.h"

#include "../../include/utils/clear.h"
#include "../../include/utils/pause.h"
#include "../../include/utils/ask_for_int.h"

#include "../../include/commands/edit_c.h"
#include "../../include/commands/delete_c.h"
#include "../../include/commands/visualize_c.h"
#include "../../include/commands/create_viewport_c.h"

#include "../../include/structures/viewport_size_t.h"

void main_m() {
  bool running = true;

  while (running) {
    clear();

    const int menu = ask_for_int(CLI_MENU);

    switch (menu) {
      // Create SVG
      case 1: {
        const viewport_size_t size = create_viewport_c();
        create_m(size);

        break;
      }
      // Edit SVG
      case 2: {
        edit_c();

        break;
      }
      // Delete SVG
      case 3: {
        delete_c();

        break;
      }
      // Visualize SVG
      case 4: {
        visualize_c();

        break;
      }
      // Exit
      case 0: {
        clear();

        running = false;

        break;
      }
    }
  }
}