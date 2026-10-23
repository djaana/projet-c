#ifndef MESSAGES_H
#define MESSAGES_H

// Menu messages
#define CLI_MENU \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │               PROJET C               │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"    [1]  ✎   Create an SVG\n" \
	"    [2]  ✦   Edit an SVG\n" \
	"    [3]  ✗   Delete an SVG\n" \
	"    [4]  ◉   Visualize an SVG\n" \
	"\n" \
	"    [0]  ⏻   Exit\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define CLI_CREATE_PANEL \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │             CREATE  SVG              │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n"
#define CLI_CREATE_MENU \
	"\n" \
	"    [1]  ✎   Add a shape\n" \
	"    [2]  ✦   Edit a shape\n" \
	"    [3]  ✗   Remove a shape\n" \
	"    [4]  ↺   Reset SVG\n" \
	"    [5]  ✓   Save SVG\n" \
	"\n" \
	"    [0]  ←   Back\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define CLI_ADD_SHAPE_MENU \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │             CREATE  SVG              │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"    [1]  ●   Circle\n" \
	"    [2]  ⬭   Ellipse\n" \
	"    [3]  ■   Square\n" \
	"    [4]  ▭   Rectangle\n" \
	"    [5]  ╱   Line\n" \
	"    [6]  ⋯   Sequence of lines\n" \
	"    [7]  ⬡   Polygon\n" \
	"    [8]  〜   Trajectory\n" \
	"    [9]  ▣   Group\n" \
	"\n" \
	"    [0]  ←   Back\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "

#define CLI_UNSAVED_MENU \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │           UNSAVED CHANGES            │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"    [1]  ✓   Save and leave\n" \
	"    [2]  ✗   Discard and leave\n" \
	"\n" \
	"    [0]  ←   Back\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "

// Prompts messages
#define PROMPT_CREATE_VIEWPORT_SIZE_PANEL \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │            VIEWPORT SIZE             │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n"
#define PROMPT_CREATE_VIEWPORT_SIZE \
	"   ─ ? x ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n"
#define PROMPT_CREATE_VIEWPORT_WIDTH  "  ❯ "
#define PROMPT_CREATE_VIEWPORT_HEIGHT "  ❯ "
#define PROMPT_CIRCLE_CX \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │              ADD CIRCLE              │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"   ─ Center X ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define PROMPT_CIRCLE_CY \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │              ADD CIRCLE              │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"   ─ Center Y ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define PROMPT_CIRCLE_R \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │              ADD CIRCLE              │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"   ─ Radius ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define PROMPT_SAVE_PATH \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │               SAVE SVG               │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"   ─ Absolute SVG path to save to ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define PROMPT_SHAPE_EDIT_ID \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │              EDIT SHAPE              │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"   ─ ID of the shape to edit ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define PROMPT_EDIT_PATH \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │               EDIT SVG               │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"   ─ Absolute SVG path to edit ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define PROMPT_DELETE_PATH \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │              DELETE SVG              │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"   ─ Absolute SVG path to delete ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "
#define PROMPT_VISUALIZE_PATH \
	"\n" \
	"  ╭──────────────────────────────────────╮\n" \
	"  │            VISUALIZE SVG             │\n" \
	"  ╰──────────────────────────────────────╯\n" \
	"\n" \
	"   ─ Absolute SVG path to visualize ?\n" \
	"\n" \
	"  ──────────────────────────────────────\n" \
	"  ❯ "

// Error messages
#define ERROR_FILE_NOT_FOUND \
	"\n" \
	"  ✗  File not found (or inaccessible).\n"
#define ERROR_FILE_DELETE \
	"\n" \
	"  ✗  Could not delete the file.\n"
	#define ERROR_INVALID_VIEWPORT_WIDTH \
	"\n" \
	"  ✗  The viewport width must be greater than 0.\n"
	#define ERROR_INVALID_VIEWPORT_HEIGHT \
	"\n" \
	"  ✗  The viewport height must be greater than 0.\n"
#define ERROR_INVALID_RADIUS \
	"\n" \
	"  ✗  The radius must be greater than 0.\n"
#define ERROR_SHAPE_ADD \
	"\n" \
	"  ✗  Could not add the shape.\n"
#define ERROR_INVALID_EXTENSION \
	"\n" \
	"  ✗  The path must end with .svg.\n"
#define ERROR_FILE_WRITE \
	"\n" \
	"  ✗  Could not write the file.\n"

// Success messages
#define SUCCESS_FILE_DELETED \
	"\n" \
	"  ✓  File successfully deleted.\n"
#define SUCCESS_FILE_VISUALIZE \
	"\n" \
	"  ✓  File successfully launched in default app.\n"
#define SUCCESS_SHAPE_ADDED \
	"\n" \
	"  ✓  Shape successfully added.\n"
#define SUCCESS_FILE_SAVED \
	"\n" \
	"  ✓  File successfully saved.\n"

#endif