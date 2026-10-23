#include <stdbool.h>

#include "../../include/cli/add_shape_m.h"
#include "../../include/cli/messages.h"

#include "../../include/utils/clear.h"
#include "../../include/utils/pause.h"
#include "../../include/utils/ask_for_int.h"

#include "../../include/commands/add_circle_c.h"

/**
 * Displays the shape selection menu and dispatches to the matching command
 * until the user goes back.
 *
 * @param svg SVG to which shapes are added
 */
void add_shape_m(svg_t* svg) {
  bool running = true;

  while (running) {
    clear();
    
    const int menu = ask_for_int(CLI_ADD_SHAPE_MENU);

    switch (menu) {
      // Circle
      case 1: {
        add_circle_c(svg);

        break;
      }
      // Ellipse
      case 2: break;
      // Square
      case 3: break;
      // Rectangle
      case 4: break;
      // Line
      case 5: break;
      // Sequence
      case 6: break;
      // Polygon
      case 7: break;
      // Trajectory
      case 8: break;
      // Group
      case 9: break;
      // Back
      case 0: {
        running = false;

        break;
      }
    }
  }
}