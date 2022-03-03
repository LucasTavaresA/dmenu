/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int dmw = 1277;  /* width when not especified */
static const unsigned int alpha = 0xe6;
static int fuzzy = 1;              /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Fira Code:pixelsize=16:antialias=true:autohint=true",
    "SauceCodePro Nerd Font Mono:weight=bold:size=20:antialias=true:hinting=true",
    "JoyPixels:pixelsize=16:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm] = {          "#ffffff", "#2f334d" },
	[SchemeSel] = {           "#2f334d", "#ffffff" },
    [SchemeBorder] = {        "#ffffff", "#ffffff" },
    [SchemeSelHighlight] = {  "#000000", "#ffff00" },
	[SchemeNormHighlight] = { "#000000", "#ffff00" },
	[SchemeOut] = {           "#ffff00", "#ffff00" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 20;
static unsigned int min_lineheight = 20;


/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;

/* Size of the window border */
static const unsigned int border_width = 1;

