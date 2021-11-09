/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#FFFFFF", "#000000" },
	[SchemeSel] = { "#FFFFFF", "#0000FF" },
	[SchemeSelHighlight] = { "#FFFF00", "#0000FF" },
	[SchemeNormHighlight] = { "#FFFF00", "#000000" },
	[SchemeOut] = { "#000000", "#FFFFFF" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 25;
static unsigned int columns    = 6;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
