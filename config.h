/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#111111",     /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

// Show randomly generated rectangles as keypress feedback.
static short int blocks_enabled = 1;
// The screen is divided into a grid of <blocks_count>x<blocks_count>
// Each rectangle's size is random number of blocks in this grid,
// limited to <max_size_in_blocks>.
static const int blocks_count = 20;
static const int max_size_in_blocks = 5;
// Clearing blocks is more secure, but won't create a mosaic
// masterpiece.
static short int clear_blocks = 0;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
