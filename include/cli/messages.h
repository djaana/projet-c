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

// Success messages
#define SUCCESS_FILE_DELETED \
	"\n" \
	"  ✓  File successfully deleted.\n"
#define SUCCESS_FILE_VISUALIZE \
	"\n" \
	"  ✓  File successfully launched in default app.\n"

#endif