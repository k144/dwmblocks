//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*//*Command*/	/*Update Interval*/	/*Update Signal*/
	{"",	"sh ~/.local/bin/bar/pkg",	0,	8},
	{"", 	"sh ~/.local/bin/bar/mem",	10,	3},
	{"", 	"sh ~/.local/bin/bar/cpu",	2,	2},
	{"", 	"sh ~/.local/bin/bar/time",	1,	1},
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/* {"",	"music",	0,	11}, */
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"torrent",	20,	7}, */
	/* {"",	"news",		0,	6}, */
	/* {"",	"memory",	10,	14}, */
	/* {"",	"cpu",		10,	13}, */
	/* {"",	"moonphase",	18000,	5}, */
	/* {"",	"weather",	18000,	5}, */
	/* {"",	"mailbox",	180,	12}, */
	/* {"",	"volume",	1,	10}, */
	/* {"",	"battery | tr \'\n\' \' \'",	5,	3}, */
	/* {"",	"clock",	60,	1}, */
	/* {"",	"internet",	5,	4}, */
	/* {"",	"help-icon",	0,	15}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " - ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
